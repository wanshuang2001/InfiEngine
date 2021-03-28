#pragma once

struct IEGenericPlatformType
{
	typedef unsigned char 		uint8;
	typedef unsigned short int	uint16;
	typedef unsigned int		uint32;
	typedef unsigned long long	uint64;
	typedef	signed char			int8;
	typedef signed short int	int16;
	typedef signed int	 		int32;
	typedef signed long long	int64;
	typedef char				ANSICHAR;
	typedef wchar_t				WIDECHAR;
	typedef uint8				CHAR8;
	typedef uint16				CHAR16;		
	typedef uint32				CHAR32;
	typedef WIDECHAR			TCHAR;
};

//windows platform
struct IEWindowsPlatformType : public IEGenericPlatformType
{
#ifdef _WIN64
	typedef unsigned __int64	SIZE_T;
	typedef __int64				SSIZE_T;
#else
	typedef unsigned long		SIZE_T;
	typedef long				SSIZE_T;
#endif
};
typedef IEWindowsPlatformType IEPlatformTypes;

//linux platform

//mac platform

//android platform

typedef IEPlatformTypes::uint8		uint8;
typedef IEPlatformTypes::uint16		uint16;
typedef IEPlatformTypes::uint32		uint32;
typedef IEPlatformTypes::uint64		uint64;
typedef	IEPlatformTypes::int8		int8;
typedef IEPlatformTypes::int16		int16;
typedef IEPlatformTypes::int32		int32;
typedef IEPlatformTypes::int64		int64;