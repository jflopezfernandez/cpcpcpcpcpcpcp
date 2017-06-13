
#include "includes/Main.hpp"


Fraction::Fraction(int a, int b)
	: num(a), den(b)
{
	// default ctor
}


void Fraction::simplify()
{
	int gcd = getGCD(num,den);

	if (gcd > 1) {
		num /= gcd;
		den /= gcd;
	}
}


void Fraction::print()
{
	if (den == 0) {
		std::cout << "NaN" << std::endl;
	} else {
		if (den == 1) {
			printf("%i\n", num);
		} else if (num == 0) {
			printf("%i\n", 0);
		} else {
			printf("%i/%i\n", num, den);
		}
	}
}