#ifndef _NUMBER_HPP
#define _NUMBER_HPP


/** Incomplete */

class Fraction {
	private:
		int num;
		int den;

	public:
		Fraction() = delete;
		Fraction(int a, int b);


		/** Member methods */
		void setNum(int n) { num = n; }
		void setDen(int n) { den = n; }

		int getNum() const { return num; }
		int getDen() const { return den; }

		void simplify();

		void print();


		/** Friend functions */

		friend int getGCD(int m, int n);
};


/** Incomplete */

class Number {
	private:
		int dec;
		Fraction fra;
};


#endif /* _NUMBER_HPP */