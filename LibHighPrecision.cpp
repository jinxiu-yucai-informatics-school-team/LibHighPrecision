#include "LibHighPrecision.h"

LIBHIGHPRECISION_NAMESPACE_BEGIN

template <class IntegerType>
Int::Int(IntegerType number, IntegerType length)
{
	this->pointer(new uint8_t[length]{0});
	this->length = length;
	this->sign = Sign::Positive;
}

Int::Int(void) : Int(0, 200)
{
}

Int::~Int(void)
{
}

LIBHIGHPRECISION_NODISCARD Int Int::operator +(Int rhs)
{
	
}

LIBHIGHPRECISION_NODISCARD Int Int::operator -(Int rhs)
{

}

LIBHIGHPRECISION_NODISCARD Int Int::operator *(Int rhs)
{

}

LIBHIGHPRECISION_NODISCARD Int Int::operator /(Int rhs)
{

}

std::ostream& operator<<(std::ostream& os, Int rhs)
{
	// TODO: �ڴ˴����� return ���
}

std::istream& operator<<(std::istream& is, Int rhs)
{
	// TODO: �ڴ˴����� return ���
}

std::wostream& operator<<(std::wostream& os, Int rhs)
{
	// TODO: �ڴ˴����� return ���
}

std::wistream& operator<<(std::wistream& is, Int rhs)
{
	// TODO: �ڴ˴����� return ���
}

LIBHIGHPRECISION_NAMESPACE_END
