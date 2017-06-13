#ifndef _MATRIX_HPP
#define _MATRIX_HPP


const int DIMENSION = 3;


class Matrix {
	private:
		int m[DIMENSION][DIMENSION];

	public:
		Matrix();
		Matrix(real n);

		void print() const;
};


#endif /* _MATRIX_HPP */