/* -*- mode: C -*-
 *
 *       File:         pdf-time-set-to-current-utc-time.c
 *       Date:         Fri Feb 27 17:35:31 2009
 *
 *       GNU PDF Library - Unit tests for pdf_time_set_to_current_utc_time
 *
 */

/* Copyright (C) 2009-2011 Free Software Foundation, Inc. */

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
#include <check.h>
#include <pdf.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <pdf-test-common.h>
/*
 * Test: pdf_time_set_to_current_utc_time
 * Description:
 *   Create new pdf_time_t object and call
 *   pdf_time_set_to_current_utc_time on it. Then
 *   get utc calendar from it and compare it with
 *   manualy created calendar.
 * Success condition:
 *   1. Function pdf_time_set_to_current_utc_time
 *      schould return PDF_OK.
 *   2. Get pdf_time_cal_s from that time recived in
 *      point 1.
 *   3. Received pdf_time_cal_s schould be equal to
 */
START_TEST (pdf_time_set_to_current_utc_time_001)
{
  pdf_time_t utc_time, mytime;
  struct pdf_time_cal_s utccal, mycal;

  pdf_time_init (&utc_time);
  pdf_time_init (&mytime);

  /* Clear pdf_time_cal_s structures */
  memset (&mycal, 0, sizeof (struct pdf_time_cal_s));
  memset (&utccal, 0, sizeof (struct pdf_time_cal_s));

  /** Set mytime object with current system time in utc */
  pdf_time_set_utc (&mytime, time (NULL));

  pdf_time_get_utc_cal (&mytime, &mycal);

  /* get utctime in pdf_time_t and pdf_time_cal_s objects */
  pdf_time_set_to_current_utc_time (&utc_time);
  pdf_time_get_utc_cal (&utc_time, &utccal);

  fail_unless (memcmp (&utccal,
                       &mycal,
                       sizeof (struct pdf_time_cal_s)) == 0);

  pdf_time_deinit (&utc_time);
  pdf_time_deinit (&mytime);
}
END_TEST

/*
 * Test case creation function
 */
TCase *
test_pdf_time_set_to_current_utc_time (void)
{
  TCase *tc = tcase_create ("pdf_time_set_to_current_utc_time");

  tcase_add_test (tc, pdf_time_set_to_current_utc_time_001);
  tcase_add_checked_fixture (tc,
                             pdf_test_setup,
                             pdf_test_teardown);
  return tc;
}

/* End of pdf-time-set-to-current-utc-time.c */
