#pragma once

#ifndef _LIBHIGHPRECISION_
#define _LIBHIGHPRECISION_

#if !(defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__))
#error This Library Isn't Compatible Your Platform.
#endif

#if __cplusplus < 202004L && _MSVC_LANG < 202004L
#error This Library Isn't Support Your C++ Standard.
#endif

#ifndef LIBHIGHPRECISION_EXPORTS
#define LIBHIGHPRECISION_API __declspec(dllimport)
#else
#define LIBHIGHPRECISION_API __declspec(dllexport)
#endif

#define LIBHIGHPRECISION_NAMESPACE_BEGIN    namespace LibHighPrecision {
#define LIBHIGHPRECISION_NAMESPACE_END      }
#define LIBHIGHPRECISION_NODISCARD          [[nodiscard]]
#define LIBHIGHPRECISION_NODISCARD_MSG(msg) [[nodiscard(msg)]]

#include <cstdint>
#include <iostream>
#include <memory>

LIBHIGHPRECISION_NAMESPACE_BEGIN

enum class Sign : int8_t
{
	Unknown = -1,
	Positive = 0,
	Negative = 1,
};

class LIBHIGHPRECISION_API Int
{
public:
	template <class IntegerType>
	explicit Int(IntegerType number = 0, IntegerType length = 200);
	explicit Int(void);

	virtual ~Int(void);

	LIBHIGHPRECISION_NODISCARD Int operator +(Int rhs);
	LIBHIGHPRECISION_NODISCARD Int operator -(Int rhs);
	LIBHIGHPRECISION_NODISCARD Int operator *(Int rhs);
	LIBHIGHPRECISION_NODISCARD Int operator /(Int rhs);

private:
	uint64_t length;
	std::unique_ptr <uint8_t> pointer;
	Sign sign : 1;
};

static std::ostream& operator <<(std::ostream& os, Int rhs);
static std::istream& operator >>(std::istream& is, Int rhs);
static std::wostream& operator <<(std::wostream& os, Int rhs);
static std::wistream& operator >>(std::wistream& is, Int rhs);

LIBHIGHPRECISION_NAMESPACE_END

#endif
