/*
    $Id: udf.c,v 1.1 2005/10/24 10:14:58 rocky Exp $

    Copyright (C) 2005 Rocky Bernstein <rocky@panix.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
/* Access routines */

#include "udf_private.h"

const char *
udf_get_name(const udf_file_t *p_udf_file)
{
  return p_udf_file->psz_name;
}

bool
udf_is_dir(const udf_file_t *p_udf_file)
{
  return p_udf_file->b_dir;
}

