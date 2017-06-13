#ifndef _MATRIX_HPP
#define _MATRIX_HPP


const int DIMENSION = 3;


class Matrix {
	private:
		int m[DIMENSION][DIMENSION];

	public:
		Matrix();
		Matrix(int n);

		void print();
};


#endif /* _MATRIX_HPP */