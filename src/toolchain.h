#ifndef __TOOLCHAIN__H_
#define __TOOLCHAIN__H_

#ifdef SDCC

#define IDATA_SEG __idata
#define XDATA_SEG __xdata

#define SFR_DEF(name, loc) __sfr __at(loc) name

#else // Keil

#define IDATA_SEG idata
#define XDATA_SEG xdata

#define SFR_DEF(name, loc) sfr name = loc

#endif

#endif