/*
    This file is part of SUPPL - the supplemental library for DOS
    Copyright (C) 1996-2000 Steffen Kaiser

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/
/* $RCSfile$
   $Locker$	$Name$	$State$

ob(ject): suppl_log_find_list
su(bsystem): debug
ty(pe): L
sy(nopsis): 
sh(ort description): Search a name in a log list
lo(ng description): Searches for a name through a log list and return if
	the name is enabled or disabled.
pr(erequistes): list != NULL
va(lue): 0:	no entry of the specified name or \tok{str == NULL}
	\item else: status of the found entry
re(lated to): suppl_log_match_list
se(condary subsystems): 
xr(ef): 
im(port): 
fi(le): 
in(itialized by): 
wa(rning): 
bu(gs): 
co(mpilers): 

*/

#include "initsupl.loc"

#ifndef _MICROC_
#endif
#include <portable.h>

#include "suppldbg.loc"

#ifdef RCS_Version
static char const rcsid[] = 
	"$Id$";
#endif

int suppl_log_find_list(suppl_log_list_t *list
	, suppl_log_csptr_t str)
{	suppl_log_list_t *act;
	int flg, ch;

	assert(list);

	flg = 0;

	if(str && (act = list->suppl_l_nxt) != 0) do {
		if((ch = suppl_log_match_item(act, str)) != 0)
			flg = ch;
	} while((act = act->suppl_l_nxt) != 0);

	return flg;
}
