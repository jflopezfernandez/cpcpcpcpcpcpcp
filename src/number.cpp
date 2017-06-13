
#include "includes/Main.hpp"


Fraction::Fraction(int a, int b)
	: num(a), den(b)
{
	// default ctor
}


void Fraction::print()
{
	printf("%i/%i\n", num, den);
}