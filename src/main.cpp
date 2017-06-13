
#include "includes/Main.hpp"


class Point {
	private:
		int x,
			y,
			z;

	public:
		Point() = delete;
		Point(int a, int b, int c) : x(a), y(b), z(c) { }

		void print() const {
			printf("(%i,%i,%i)\n", x, y, z);
		}
};


int main()
{
	system("cls");

	Point p(1,2,3);
	p.print();

	return EXIT_SUCCESS;
}