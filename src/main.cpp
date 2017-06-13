
#include "includes/Main.hpp"


int main()
{
	int a,
		b;

	int response = TRUE;

	do {
		std::cout << "Enter a and b: ";
		std::cin >> a >> b;

		Fraction f(a,b);
		f.simplify();
		f.print();

		std::cout << "Continue? ";
		response = getInput();
	} while (response);


	return EXIT_SUCCESS;
}