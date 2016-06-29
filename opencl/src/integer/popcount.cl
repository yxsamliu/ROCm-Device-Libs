
#include "int.h"

#define UEXPATTR __attribute__((always_inline, overloadable, const))

UEXP(char,popcount)
UEXP(uchar,popcount)
UEXP(short,popcount)
UEXP(ushort,popcount)
UEXP(int,popcount)
UEXP(uint,popcount)
UEXP(long,popcount)
UEXP(ulong,popcount)

UEXPATTR char
popcount(char x)
{
    return (char)__ockl_popcount_u32((uint)(uchar)x);
}

UEXPATTR uchar
popcount(uchar x)
{
    return (uchar)__ockl_popcount_u32((uint)x);
}

UEXPATTR short
popcount(short x)
{
    return (short)__ockl_popcount_u32((uint)(ushort)x);
}

UEXPATTR ushort
popcount(ushort x)
{
    return (ushort)__ockl_popcount_u32((uint)x);
}

UEXPATTR int
popcount(int x)
{
    return (int)__ockl_popcount_u32((uint)x);
}

UEXPATTR uint
popcount(uint x)
{
    return __ockl_popcount_u32(x);
}

UEXPATTR long
popcount(long x)
{
    uint2 y = as_uint2(x);
    return (long)(__ockl_popcount_u32(y.lo) + __ockl_popcount_u32(y.hi));
}

UEXPATTR ulong
popcount(ulong x)
{
    uint2 y = as_uint2(x);
    return (ulong)(__ockl_popcount_u32(y.lo) + __ockl_popcount_u32(y.hi));
}

