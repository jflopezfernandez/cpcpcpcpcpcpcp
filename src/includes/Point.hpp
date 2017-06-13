#ifndef _POINT_HPP
#define _POINT_HPP


class Point {
	private:
		int x,
			y,
			z;

	public:
		Point() = delete;
		Point(int a, int b, int c) : x(a), y(b), z(c) { }

		void print() const;


		friend int getDistance(const Point &a, const Point &b);
		friend double getDistanceDouble(const Point &a, const Point &b);
};


int getDistance(const Point &a, const Point &b);
double getDistanceDouble(const Point &a, const Point &b);




#endif /* _POINT_HPP */