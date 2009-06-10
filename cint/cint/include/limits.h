#ifndef G__LIMITS_H
#define G__LIMITS_H
#define 	CHAR_BIT (8)
#define 	CHAR_MAX (127)
#define 	CHAR_MIN (-128)
#define 	INT_MAX (2147483647)
#define 	INT_MIN (-2147483648)
#if sizeof(long) == sizeof(int)
#define 	LONG_MAX (2147483647)
#define 	LONG_MIN (-2147483648)
#else
#define 	LONG_MAX (9223372036854775807)
#define 	LONG_MIN (-9223372036854775808)
#endif
#define 	SCHAR_MAX (127)
#define 	SCHAR_MIN (-128)
#define 	SHRT_MAX (32767)
#define 	SHRT_MIN (-32768)
#define 	UCHAR_MAX (255U)
const unsigned int  	UINT_MAX =(4294967295U);
const unsigned long 	ULONG_MAX =(18446744073709551615U);
#define 	USHRT_MAX (65535U)
#endif
