/* vi: set sw=4 ts=4: */
/*
 * Busybox utility routines.
 *
 * Copyright (C) 2005 by Tito Ragusa <tito-wolit@tiscali.it>
 *
 * Licensed under GPLv2, see file LICENSE in this source tree.
 */
#include "libbb.h"

void FAST_FUNC bb_do_delay(int seconds)
{
#if 0
	time_t start, now;

	start = time(NULL);
	do {
		sleep(seconds);
		now = time(NULL);
	} while ((now - start) < seconds);
#endif
}
