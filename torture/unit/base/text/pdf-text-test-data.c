/* -*- mode: C -*-
 *
 *       File:         pdf-text-test-data.c
 *       Date:         Mon Mar 10 18:30:01 2008
 *
 *       GNU PDF Library - Commont Data to test the Text Module
 *
 */

/* Copyright (C) 2008-2011 Free Software Foundation, Inc. */

/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <config.h>
#include <stdio.h>
#include <stdint.h>
#include <base/text/pdf-text-test-common.h>
#include <pdf-test-common.h>

/* ASCII-7 strings for encoding tests */
const test_string_t ascii_strings[] = {
  { "GNU's not Unix",
    14,
    "\x00\x00\x00\x47\x00\x00\x00\x4E\x00\x00\x00\x55\x00\x00\x00\x27" \
    "\x00\x00\x00\x73\x00\x00\x00\x20\x00\x00\x00\x6E\x00\x00\x00\x6F" \
    "\x00\x00\x00\x74\x00\x00\x00\x20\x00\x00\x00\x55\x00\x00\x00\x6E" \
    "\x00\x00\x00\x69\x00\x00\x00\x78",
    56
  },
  {
    "abcdefghijklmnopqrstuvwxyz0123456789",
    36,
    "\x00\x00\x00" "a" "\x00\x00\x00" "b" "\x00\x00\x00" "c" "\x00\x00\x00" "d"\
    "\x00\x00\x00" "e" "\x00\x00\x00" "f" "\x00\x00\x00" "g" "\x00\x00\x00" "h"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "j" "\x00\x00\x00" "k" "\x00\x00\x00" "l"\
    "\x00\x00\x00" "m" "\x00\x00\x00" "n" "\x00\x00\x00" "o" "\x00\x00\x00" "p"\
    "\x00\x00\x00" "q" "\x00\x00\x00" "r" "\x00\x00\x00" "s" "\x00\x00\x00" "t"\
    "\x00\x00\x00" "u" "\x00\x00\x00" "v" "\x00\x00\x00" "w" "\x00\x00\x00" "x"\
    "\x00\x00\x00" "y" "\x00\x00\x00" "z" "\x00\x00\x00" "0" "\x00\x00\x00" "1"\
    "\x00\x00\x00" "2" "\x00\x00\x00" "3" "\x00\x00\x00" "4" "\x00\x00\x00" "5"\
    "\x00\x00\x00" "6" "\x00\x00\x00" "7" "\x00\x00\x00" "8" "\x00\x00\x00" "9",
    144
  },
  {
    "?!,.-_",
    6,
    "\x00\x00\x00" "?" "\x00\x00\x00" "!" "\x00\x00\x00" "," "\x00\x00\x00" "."\
    "\x00\x00\x00" "-" "\x00\x00\x00" "_",
    24
  },
  { NULL, 0, NULL, 0 }
};


/* PDF DOC Encoding strings for encoding tests */
const test_string_t pdf_doc_encoding_strings[] = {
  { "GNU's not Unix",
    14,
    "\x00\x00\x00\x47\x00\x00\x00\x4E\x00\x00\x00\x55\x00\x00\x00\x27" \
    "\x00\x00\x00\x73\x00\x00\x00\x20\x00\x00\x00\x6E\x00\x00\x00\x6F" \
    "\x00\x00\x00\x74\x00\x00\x00\x20\x00\x00\x00\x55\x00\x00\x00\x6E" \
    "\x00\x00\x00\x69\x00\x00\x00\x78",
    56
  },
  {
    "abcdefghijklmnopqrstuvwxyz0123456789",
    36,
    "\x00\x00\x00" "a" "\x00\x00\x00" "b" "\x00\x00\x00" "c" "\x00\x00\x00" "d"\
    "\x00\x00\x00" "e" "\x00\x00\x00" "f" "\x00\x00\x00" "g" "\x00\x00\x00" "h"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "j" "\x00\x00\x00" "k" "\x00\x00\x00" "l"\
    "\x00\x00\x00" "m" "\x00\x00\x00" "n" "\x00\x00\x00" "o" "\x00\x00\x00" "p"\
    "\x00\x00\x00" "q" "\x00\x00\x00" "r" "\x00\x00\x00" "s" "\x00\x00\x00" "t"\
    "\x00\x00\x00" "u" "\x00\x00\x00" "v" "\x00\x00\x00" "w" "\x00\x00\x00" "x"\
    "\x00\x00\x00" "y" "\x00\x00\x00" "z" "\x00\x00\x00" "0" "\x00\x00\x00" "1"\
    "\x00\x00\x00" "2" "\x00\x00\x00" "3" "\x00\x00\x00" "4" "\x00\x00\x00" "5"\
    "\x00\x00\x00" "6" "\x00\x00\x00" "7" "\x00\x00\x00" "8" "\x00\x00\x00" "9",
    144
  },
  {
    "?!,.-_",
    6,
    "\x00\x00\x00" "?" "\x00\x00\x00" "!" "\x00\x00\x00" "," "\x00\x00\x00" "."\
    "\x00\x00\x00" "-" "\x00\x00\x00" "_",
    24
  },

  /*
   { "\x24\x25\x26\x27\x28\x29\x30\x31",
   8,

   },
   { (pdf_char_t []) {120,121,122,123,124,125,126,127}, 8},
   { (pdf_char_t []) {128,129,130,131,132,133,134,135}, 8},
   { (pdf_char_t []) {136,137,138,139,140,141,142,143}, 8},
   { (pdf_char_t []) {144,145,146,147,148,149,150,151}, 8},
   { (pdf_char_t []) {152,153,154,155,156,157,158,159}, 8},
   { (pdf_char_t []) {160,161,162,163,164,165,166,167}, 8}, */
  { NULL, 0, NULL, 0 }
};

/* UTF-8 VALID strings for encoding tests */
const test_string_t utf8_strings[] = {
  {
    "\xEF\xBB\xBF" \
    "GNU's not Unix",
    17,
    "\x00\x00\x00\x47\x00\x00\x00\x4E\x00\x00\x00\x55\x00\x00\x00\x27" \
    "\x00\x00\x00\x73\x00\x00\x00\x20\x00\x00\x00\x6E\x00\x00\x00\x6F" \
    "\x00\x00\x00\x74\x00\x00\x00\x20\x00\x00\x00\x55\x00\x00\x00\x6E" \
    "\x00\x00\x00\x69\x00\x00\x00\x78",
    56
  },
  {
    "\xEF\xBB\xBF" \
    "abcdefghijklmnopqrstuvwxyz0123456789",
    39,
    "\x00\x00\x00" "a" "\x00\x00\x00" "b" "\x00\x00\x00" "c" "\x00\x00\x00" "d"\
    "\x00\x00\x00" "e" "\x00\x00\x00" "f" "\x00\x00\x00" "g" "\x00\x00\x00" "h"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "j" "\x00\x00\x00" "k" "\x00\x00\x00" "l"\
    "\x00\x00\x00" "m" "\x00\x00\x00" "n" "\x00\x00\x00" "o" "\x00\x00\x00" "p"\
    "\x00\x00\x00" "q" "\x00\x00\x00" "r" "\x00\x00\x00" "s" "\x00\x00\x00" "t"\
    "\x00\x00\x00" "u" "\x00\x00\x00" "v" "\x00\x00\x00" "w" "\x00\x00\x00" "x"\
    "\x00\x00\x00" "y" "\x00\x00\x00" "z" "\x00\x00\x00" "0" "\x00\x00\x00" "1"\
    "\x00\x00\x00" "2" "\x00\x00\x00" "3" "\x00\x00\x00" "4" "\x00\x00\x00" "5"\
    "\x00\x00\x00" "6" "\x00\x00\x00" "7" "\x00\x00\x00" "8" "\x00\x00\x00" "9",
    144
  },
  {
    "\xEF\xBB\xBF" \
    "?!,.-_",
    9,
    "\x00\x00\x00" "?" "\x00\x00\x00" "!" "\x00\x00\x00" "," "\x00\x00\x00" "."\
    "\x00\x00\x00" "-" "\x00\x00\x00" "_",
    24
  },
  {
    "\xEF\xBB\xBF" \
    "\xF0\x90\x80\x80",
    7,
    "\x00\x01\x00\x00",
    4
  },
  {
    "\xEF\xBB\xBF" \
    "\x41" "\xCE\xA9" "\xE8\xAA\x9E" "\xF0\x90\x8E\x84",
    13,
    "\x00\x00\x00\x41" "\x00\x00\x03\xA9" "\x00\x00\x8A\x9E" "\x00\x01\x03\x84",
    16
  },
  { NULL, 0, NULL, 0 }
};

/* UTF-16BE strings for encoding tests (WITH 16-bit BOM!!!) */
const test_string_t utf16be_strings[] = {
  { "\xFE\xFF" \
    "\x00G" "\x00N" "\x00U" "\x00'" "\x00s" "\x00 " "\x00n" "\x00o" "\x00t" \
    "\x00 " "\x00U" "\x00n" "\x00i" "\x00x",
    30,
    "\x00\x00\x00" "G" "\x00\x00\x00" "N" "\x00\x00\x00" "U" "\x00\x00\x00" "'"\
    "\x00\x00\x00" "s" "\x00\x00\x00" " " "\x00\x00\x00" "n" "\x00\x00\x00" "o"\
    "\x00\x00\x00" "t" "\x00\x00\x00" " " "\x00\x00\x00" "U" "\x00\x00\x00" "n"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "x",
    56
  },
  {
    "\xFE\xFF" \
    "\x00""a" "\x00""b" "\x00""c" "\x00""d" "\x00""e" "\x00""f" "\x00""g" \
    "\x00""h" "\x00""i" "\x00""j" "\x00""k" "\x00""l" "\x00""m" "\x00""n" \
    "\x00""o" "\x00""p" "\x00""q" "\x00""r" "\x00""s" "\x00""t" "\x00""u" \
    "\x00""v" "\x00""w" "\x00""x" "\x00""y" "\x00""z" "\x00""0" "\x00""1" \
    "\x00""2" "\x00""3" "\x00""4" "\x00""5" "\x00""6" "\x00""7" "\x00""8" \
    "\x00""9",
    74,
    "\x00\x00\x00" "a" "\x00\x00\x00" "b" "\x00\x00\x00" "c" "\x00\x00\x00" "d"\
    "\x00\x00\x00" "e" "\x00\x00\x00" "f" "\x00\x00\x00" "g" "\x00\x00\x00" "h"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "j" "\x00\x00\x00" "k" "\x00\x00\x00" "l"\
    "\x00\x00\x00" "m" "\x00\x00\x00" "n" "\x00\x00\x00" "o" "\x00\x00\x00" "p"\
    "\x00\x00\x00" "q" "\x00\x00\x00" "r" "\x00\x00\x00" "s" "\x00\x00\x00" "t"\
    "\x00\x00\x00" "u" "\x00\x00\x00" "v" "\x00\x00\x00" "w" "\x00\x00\x00" "x"\
    "\x00\x00\x00" "y" "\x00\x00\x00" "z" "\x00\x00\x00" "0" "\x00\x00\x00" "1"\
    "\x00\x00\x00" "2" "\x00\x00\x00" "3" "\x00\x00\x00" "4" "\x00\x00\x00" "5"\
    "\x00\x00\x00" "6" "\x00\x00\x00" "7" "\x00\x00\x00" "8" "\x00\x00\x00" "9",
    144
  },
  {
    "\xFE\xFF" \
    "\x00""?" "\x00""!" "\x00""," "\x00""." "\x00""-" "\x00""_",
    14,
    "\x00\x00\x00" "?" "\x00\x00\x00" "!" "\x00\x00\x00" "," "\x00\x00\x00" "."\
    "\x00\x00\x00" "-" "\x00\x00\x00" "_",
    24
  },
  { /* From wikipedia example... :-) (water, z, G clef) */
    "\xFE\xFF" \
    "\x6C\x34" "\x00\x7A" "\xD8\x34\xDD\x1E",
    10,
    "\x00\x00\x6C\x34" "\x00\x00\x00\x7A" "\x00\x01\xD1\x1E",
    12
  },
  {
    "\xFE\xFF" \
    "\x00\x41" "\x03\xA9" "\x8A\x9E" "\xD8\x00\xDF\x84",
    12,
    "\x00\x00\x00\x41" "\x00\x00\x03\xA9" "\x00\x00\x8A\x9E" "\x00\x01\x03\x84",
    16
  },
  { NULL, 0, NULL, 0 }
};

/* UTF-32BE strings for encoding tests (WITH 32-bit BOM!!!) */
const test_string_t utf32be_strings[] = {
  {
    "\x00\x00\xFE\xFF" \
    "\x00\x00\x00" "G" "\x00\x00\x00" "N" "\x00\x00\x00" "U" "\x00\x00\x00" "'"\
    "\x00\x00\x00" "s" "\x00\x00\x00" " " "\x00\x00\x00" "n" "\x00\x00\x00" "o"\
    "\x00\x00\x00" "t" "\x00\x00\x00" " " "\x00\x00\x00" "U" "\x00\x00\x00" "n"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "x",
    60,
    "\x00\x00\x00" "G" "\x00\x00\x00" "N" "\x00\x00\x00" "U" "\x00\x00\x00" "'"\
    "\x00\x00\x00" "s" "\x00\x00\x00" " " "\x00\x00\x00" "n" "\x00\x00\x00" "o"\
    "\x00\x00\x00" "t" "\x00\x00\x00" " " "\x00\x00\x00" "U" "\x00\x00\x00" "n"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "x",
    56
  },
  {
    "\x00\x00\xFE\xFF" \
    "\x00\x00\x00" "a" "\x00\x00\x00" "b" "\x00\x00\x00" "c" "\x00\x00\x00" "d"\
    "\x00\x00\x00" "e" "\x00\x00\x00" "f" "\x00\x00\x00" "g" "\x00\x00\x00" "h"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "j" "\x00\x00\x00" "k" "\x00\x00\x00" "l"\
    "\x00\x00\x00" "m" "\x00\x00\x00" "n" "\x00\x00\x00" "o" "\x00\x00\x00" "p"\
    "\x00\x00\x00" "q" "\x00\x00\x00" "r" "\x00\x00\x00" "s" "\x00\x00\x00" "t"\
    "\x00\x00\x00" "u" "\x00\x00\x00" "v" "\x00\x00\x00" "w" "\x00\x00\x00" "x"\
    "\x00\x00\x00" "y" "\x00\x00\x00" "z" "\x00\x00\x00" "0" "\x00\x00\x00" "1"\
    "\x00\x00\x00" "2" "\x00\x00\x00" "3" "\x00\x00\x00" "4" "\x00\x00\x00" "5"\
    "\x00\x00\x00" "6" "\x00\x00\x00" "7" "\x00\x00\x00" "8" "\x00\x00\x00" "9",
    148,
    "\x00\x00\x00" "a" "\x00\x00\x00" "b" "\x00\x00\x00" "c" "\x00\x00\x00" "d"\
    "\x00\x00\x00" "e" "\x00\x00\x00" "f" "\x00\x00\x00" "g" "\x00\x00\x00" "h"\
    "\x00\x00\x00" "i" "\x00\x00\x00" "j" "\x00\x00\x00" "k" "\x00\x00\x00" "l"\
    "\x00\x00\x00" "m" "\x00\x00\x00" "n" "\x00\x00\x00" "o" "\x00\x00\x00" "p"\
    "\x00\x00\x00" "q" "\x00\x00\x00" "r" "\x00\x00\x00" "s" "\x00\x00\x00" "t"\
    "\x00\x00\x00" "u" "\x00\x00\x00" "v" "\x00\x00\x00" "w" "\x00\x00\x00" "x"\
    "\x00\x00\x00" "y" "\x00\x00\x00" "z" "\x00\x00\x00" "0" "\x00\x00\x00" "1"\
    "\x00\x00\x00" "2" "\x00\x00\x00" "3" "\x00\x00\x00" "4" "\x00\x00\x00" "5"\
    "\x00\x00\x00" "6" "\x00\x00\x00" "7" "\x00\x00\x00" "8" "\x00\x00\x00" "9",
    144
  },
  {
    "\x00\x00\xFE\xFF" \
    "\x00\x00\x00" "?" "\x00\x00\x00" "!" "\x00\x00\x00" "," "\x00\x00\x00" "."\
    "\x00\x00\x00" "-" "\x00\x00\x00" "_",
    28,
    "\x00\x00\x00" "?" "\x00\x00\x00" "!" "\x00\x00\x00" "," "\x00\x00\x00" "."\
    "\x00\x00\x00" "-" "\x00\x00\x00" "_",
    24
  },
  { /* From wikipedia example... :-) (water, z, G clef) */
    "\x00\x00\xFE\xFF" \
    "\x00\x00\x6C\x34" "\x00\x00\x00\x7A" "\x00\x01\xD1\x1E",
    16,
    "\x00\x00\x6C\x34" "\x00\x00\x00\x7A" "\x00\x01\xD1\x1E",
    12
  },
  {
    "\x00\x00\xFE\xFF" \
    "\x00\x00\x00\x41" "\x00\x00\x03\xA9" "\x00\x00\x8A\x9E" "\x00\x01\x03\x84",
    20,
    "\x00\x00\x00\x41" "\x00\x00\x03\xA9" "\x00\x00\x8A\x9E" "\x00\x01\x03\x84",
    16
  },
  { NULL, 0, NULL, 0 }
};


/* End of pdf-text-test-data.c */
