
#ifndef _LIBRARY_DEBUG_H
#define _LIBRARY_DEBUG_H

#ifdef DEBUG
#define DB(x)	x
#else
#define DB(x)
#endif

#ifdef __MORPHOS__
	void dprintf(char *, ... );
	#undef kprintf
	#define kprintf dprintf
#else
	VOID kprintf(STRPTR,...);
#endif

#endif
