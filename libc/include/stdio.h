#ifndef __STDIO_H
#define __STDIO_H 1

#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

int printf(const char* __restrict, ...);
int putchar(int);
int puts(const char*);

#ifdef __cplusplus
}
#endif

#endif // __STDIO_H
