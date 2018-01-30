#!/usr/bin/perl -w
#
# Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
# Broadcom Limited and/or its subsidiaries.
# 
# Broadcom Switch Software License
# 
# This license governs the use of the accompanying Broadcom software. Your 
# use of the software indicates your acceptance of the terms and conditions 
# of this license. If you do not agree to the terms and conditions of this 
# license, do not use the software.
# 1. Definitions
#    "Licensor" means any person or entity that distributes its Work.
#    "Software" means the original work of authorship made available under 
#    this license.
#    "Work" means the Software and any additions to or derivative works of 
#    the Software that are made available under this license.
#    The terms "reproduce," "reproduction," "derivative works," and 
#    "distribution" have the meaning as provided under U.S. copyright law.
#    Works, including the Software, are "made available" under this license 
#    by including in or with the Work either (a) a copyright notice 
#    referencing the applicability of this license to the Work, or (b) a copy 
#    of this license.
# 2. Grant of Copyright License
#    Subject to the terms and conditions of this license, each Licensor 
#    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
#    copyright license to reproduce, prepare derivative works of, publicly 
#    display, publicly perform, sublicense and distribute its Work and any 
#    resulting derivative works in any form.
# 3. Grant of Patent License
#    Subject to the terms and conditions of this license, each Licensor 
#    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
#    patent license to make, have made, use, offer to sell, sell, import, and 
#    otherwise transfer its Work, in whole or in part. This patent license 
#    applies only to the patent claims licensable by Licensor that would be 
#    infringed by Licensor's Work (or portion thereof) individually and 
#    excluding any combinations with any other materials or technology.
#    If you institute patent litigation against any Licensor (including a 
#    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
#    you allege are infringed by any Work, then your patent license from such 
#    Licensor to the Work shall terminate as of the date such litigation is 
#    filed.
# 4. Redistribution
#    You may reproduce or distribute the Work only if (a) you do so under 
#    this License, (b) you include a complete copy of this License with your 
#    distribution, and (c) you retain without modification any copyright, 
#    patent, trademark, or attribution notices that are present in the Work.
# 5. Derivative Works
#    You may specify that additional or different terms apply to the use, 
#    reproduction, and distribution of your derivative works of the Work 
#    ("Your Terms") only if (a) Your Terms provide that the limitations of 
#    Section 7 apply to your derivative works, and (b) you identify the 
#    specific derivative works that are subject to Your Terms. 
#    Notwithstanding Your Terms, this license (including the redistribution 
#    requirements in Section 4) will continue to apply to the Work itself.
# 6. Trademarks
#    This license does not grant any rights to use any Licensor's or its 
#    affiliates' names, logos, or trademarks, except as necessary to 
#    reproduce the notices described in this license.
# 7. Limitations
#    Platform. The Work and any derivative works thereof may only be used, or 
#    intended for use, with a Broadcom switch integrated circuit.
#    No Reverse Engineering. You will not use the Work to disassemble, 
#    reverse engineer, decompile, or attempt to ascertain the underlying 
#    technology of a Broadcom switch integrated circuit.
# 8. Termination
#    If you violate any term of this license, then your rights under this 
#    license (including the license grants of Sections 2 and 3) will 
#    terminate immediately.
# 9. Disclaimer of Warranty
#    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
#    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
#    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
#    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
#    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
#    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
# 10. Limitation of Liability
#    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
#    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
#    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
#    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
#    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
#    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
#    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
#    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
#    THE POSSIBILITY OF SUCH DAMAGES.
# 
# 
# $Id$
#

use strict;
use warnings;
use File::Basename;
use IO::File;
use Data::Dumper;

my $arg;
my @files = ();
my @text = ();
my @insert_before = ();
my @insert_after = ();
my $exact = 1;
my $verbose = 0;
my $textfile;   # File contains name of functions to be changed 
my $texttoinsert; # Text to insert when function is found 
my @functions = ();
my $dryrun = 0;

while ( defined ( $arg = shift @ARGV) ) {
	if ( $arg eq '-h' || $arg eq '-help' ) {
        print_help();
		exit 0;
	}
	if ( $arg eq '-f' ) {
        while ( defined ( my $tmp = shift @ARGV ) ) {
            if ( $tmp !~ /^-/ ) {
                push ( @files, $tmp );
            } else {
                unshift ( @ARGV, $tmp );
                last;
            }
        }
        next;
    }
	if ( $arg eq '-text' ) {
		 push (@text, shift @ARGV);
		 push (@text, shift @ARGV);
		 next;
	}
    if ( $arg eq '-vague' ) {
        $exact = 0;
        next;
    }
    if ( $arg eq '-inserta' ) {
		push (@insert_after, shift @ARGV);
		push (@insert_after, shift @ARGV);
        next;
    }
    if ( $arg eq '-insertb' ) {
		push (@insert_before, shift @ARGV);
		push (@insert_before, shift @ARGV);
        next;
    }
    if ( $arg eq '-verbose' ) {
        $verbose = shift @ARGV;
        next;
    }
    if ( $arg eq '-list' ) {
        $textfile = shift @ARGV;
        $texttoinsert = shift @ARGV;
        next;
    }
    if ( $arg eq '-dryrun' ) {
        $dryrun = 1;
		next;
	}
    print "Illegal option $arg\n";
}

if ( @text || @insert_before || @insert_after ) {
    foreach my $file ( @files ) {
		my $once = 1;
        print "Processing file $file\n" if ($verbose & 0x1  );
        my $modified = 0;
        my $fhr = IO::File->new("$file",'r') || die "$! Unable to open file $file for reading\n";
        my $fhw = IO::File->new("$file.$$",'w') || die "$! Unable to open file $file.$$ for writing\n";
        while ( my $line=<$fhr> ) {
            for ( my $idx=0; $idx < @insert_before; $idx += 2 ) {
                 if ( $line =~ m/$insert_before[$idx]/ ) {
                     $modified = 1;
                     print $fhw $insert_before[$idx+1], "\n" if ( !$dryrun );
                     print $insert_before[$idx+1], "\n" if ( $dryrun );
                 }
            }
            for ( my $idx=0; $idx < @text; $idx += 2 ) {
				print "Searching for !$text[$idx]! and replace it with !$text[$idx+1]!\n" if ( $once );
                if ( $exact ) {
                    if ( $line =~ s/\b$text[$idx]\b/$text[$idx+1]/g ) {
                        $modified = 1; 
                        print "Changing this \'$_\' into this \'$line\'\n" if ( $verbose & 0x2 );
                    }
                } else { 
					if ( $line =~ s/$text[$idx]/$text[$idx+1]/g ) {
                        $modified = 1; 
                        print "Changing this \'$_\' into this \'$line\'\n" if ( $verbose & 0x2 );
                    }
                }
            }
			$once = 0;
            print $fhw $line;
            for ( my $idx=0; $idx < @insert_after; $idx += 2 ) {
                 if ( $line =~ m/$insert_after[$idx]/ ) {
                     $modified = 1;
                     print $fhw $insert_after[$idx+1], "\n" if ( !$dryrun );
                     print $insert_after[$idx+1], "\n" if ( $dryrun );
                 }
            }
        }
        close ( $fhr );
        close ( $fhw );
        if ( !$modified ) {
            unlink ("$file.$$");
            print "No match found. Original file unchanged. Removing temporary file $file.$$\n" if ( $verbose & 0x1 );
        } else {
            rename ( "$file.$$", "$file") || die "$! Unable to rename $file.$$ to $file\n" 
        }
    }
}

if ( defined $textfile ) {
    my $fhr = IO::File->new("$textfile",'r') || die "$! Unable to open file $textfile for reading\n";
    @functions = <$fhr>;
    chomp(@functions);
    close ( $fhr );
    foreach my $file ( @files ) {
        print "Processing file $file\n" if ($verbose & 0x1);
        my $modified = 0;
        my $fhr = IO::File->new("$file",'r') || die "$! Unable to open file $file for reading\n";
        my $fhw = IO::File->new("$file.$$",'w') || die "$! Unable to open file $file.$$ for writing\n";
        while ( my $line=<$fhr> ) {
            my $savedline = $line;
            for ( my $idx=0; $idx < @functions; $idx++  ) {
                next if ( $functions[$idx] =~ m/^$/ ); 
                if ( $line =~ s/($functions[$idx])/$1$texttoinsert/ ) {
                    $modified = 1; 
                    print "Changing this \'$savedline\' into this \'$line\' with search pattern \'$functions[$idx]\'\n" if ( $verbose & 0x2 );
                    last;
                }
            }
            print $fhw $line if ( !$dryrun );
            print $line if ( !$dryrun );
        }
        close ( $fhr );
        close ( $fhw );
        if ( !$modified ) {
            unlink ("$file.$$");
            print "No match found. Original file unchanged. Removing temporary file $file.$$\n" if ( $verbose & 0x1 );
        } else {
            rename ( "$file.$$", "$file") || die "$! Unable to rename $file.$$ to $file\n" 
        }
    }
}

sub print_help {
    print << "EOT"
$0 -text <text to search> <text to replace> -insert <text to search> <text to insert> -f <list of files> -vague 

This script searches all the files for specified search text pattern 
and replaces it with replacement text pattern. Note that the script 
replaces the original file with the modified file. Back up of the original
is highly recommended.

The -insertb option searches for specified text pattern and insert
the specified text before the line.
The -inserta option searches for specified text pattern and insert
the specified text after the line.
The -dryrun option shows what is being changed without modify the files
The -list option specifies a file contains a list of text to be changed 

the -text option can be used multiple times.
the -inserta and -insertb option can be used multiple times.


If the -vague option is used then the scripts will match any words
that contains the search pattern. Otherwise it will perform the exact
match.

USAGE:
$0 -text "find me" "replace me" -f *.c *.h  

EOT
}
