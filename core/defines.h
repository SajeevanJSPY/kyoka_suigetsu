#ifndef __DEFINES_H
#define __DEFINES_H

// unsigned int types
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

// signed int types
typedef signed char i8;
typedef signed short i16;
typedef signed int i32;
typedef signed long long i64;

// floating point types
typedef float f32;
typedef double f64;

// boolean types
typedef char bool;
typedef int b32;

#if defined(__clang__) || defined(__gcc__)
#define STATIC_ASSERT _Static_assert
#else
#define STATIC_ASSERT static_assert
#endif

// Ensure all types are of the correct size
STATIC_ASSERT(sizeof(u8) == 1, "Expected u8 to be 1 byte.");
STATIC_ASSERT(sizeof(u16) == 2, "Expected u16 to be 2 byte.");
STATIC_ASSERT(sizeof(u32) == 4, "Expected u32 to be 4 byte.");
STATIC_ASSERT(sizeof(u64) == 8, "Expected u64 to be 8 byte.");

STATIC_ASSERT(sizeof(i8) == 1, "Expected i8 to be 1 byte.");
STATIC_ASSERT(sizeof(i16) == 2, "Expected i16 to be 2 byte.");
STATIC_ASSERT(sizeof(i32) == 4, "Expected i32 to be 4 byte.");
STATIC_ASSERT(sizeof(i64) == 8, "Expected i64 to be 8 byte.");

STATIC_ASSERT(sizeof(f32) == 4, "Expected f32 to be 4 byte.");
STATIC_ASSERT(sizeof(f64) == 8, "Expected f64 to be 8 byte.");

#define true 1
#define false 0

#endif // __DEFINES_H