
#include "includes/Main.hpp"


void clearScreen()
{
	system("cls");
}


void printCppStandard()
{
	printf("%lu\n", __cplusplus);
}


void printCompilationInfo()
{
	printf("Compiled on %s, at %s\n", __DATE__, __TIME__);
}


void initializeProgram()
{
	clearScreen();
}


void terminateProgram()
{
	if (DEBUG)
	{
		std::cout << "[END]." << std::endl;
	}
}


int getInput()
{
	int response = ERROR; 		// Initialize with error value
	int validRes = FALSE; 		// Valid response flag set to false initially

	std::cout << "Enter integer for input: ";

	do {
		std::cin >> response;

		if (std::cin.fail()) {
			std::cout << "[Error] Please re-enter: ";
		} else {
			std::cout << "Response: " << response << std::endl;
			validRes = TRUE;
		}
	} while (validRes == FALSE);

	return response;
}


int getGCD(int m, int n)
{
	int r = m % n;

	while (r != 0) {
		m = n;
		n = r;

		r = m % n;
	}

	return n;
}