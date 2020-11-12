#!/usr/bin/env perl

$dir = $ENV{'HOME'}."*.conf";

@files = glob(dir);
foreach $file (@files) {
   print "$file\n" if -f $file;
   print "--------------------------\n"
}
