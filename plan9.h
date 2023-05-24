#ifndef __plan9_h__
#define __plan9_h__

#include <u.h>
#include <libc.h>
#include </sys/include/ctype.h>
#include </sys/include/stdio.h>

typedef enum { false, true } bool;

typedef s8int int8_t;
typedef u8int uint8_t;
typedef s16int int16_t;
typedef u16int uint16_t;
typedef s32int int32_t;
typedef u32int uint32_t;
typedef s64int int64_t;
typedef u64int uint64_t;
typedef long ssize_t;
typedef ulong size_t;
typedef intptr ptrdiff_t;
typedef intptr intptr_t;
typedef uintptr uintptr_t;

#define INT16_MAX 0x7fff
#define INT16_MIN ((int16_t)0x8000)
#define INT64_MIN ((int64_t)0x8000000000000000ULL)
#define INT32_MAX 0x7fffffff
#define INT_MAX INT32_MAX
#define INT32_MIN (-INT32_MAX-1)
#define INT_MIN INT32_MIN
#define SHRT_MAX 0x7fff
#define SHRT_MIN (-SHRT_MAX-1)
#define SIZE_MAX 0xffffffffU
#define UINT32_MAX 0xffffffffU
#define UINT_MAX UINT32_MAX
#define UINT64_MAX 0xffffffffffffffffULL

#define PRId64 "lld"
#define PRIu64 "llud"
#define PRIx64 "llx"

#define PATH_MAX 256

#define __attribute__(a)

#define exit(x) exits(x == 0 ? nil : "error")
#define setenv(k,v,x) putenv(k,v)
#define unsetenv(k) putenv(k,"")
#define strcasecmp cistrcmp
#define strncasecmp cistrncmp
#define getcwd getwd
#define sinf sin
#define cosf cos
#define usleep(x) sleep(x/1000)

#endif
