
#include "includes/Main.hpp"


void Matrix::print() const
{
	for (int i = DIMENSION; i < DIMENSION; ++i) {
		for (int j = DIMENSION; j < DIMENSION; ++j) {
			printf("%i ", m[i][j]);
		}
		printf("\n");
	}
}


Matrix::Matrix()
{
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			m[i][j] = 0;
		}
	}
}


Matrix::Matrix(real n)
{
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			m[i][j] = n;
		}
	}
}