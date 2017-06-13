
#include "includes/Main.hpp"


/** Point::print()
 *  
 *  Function prints point coordinates to standard out stream.
 *
 */

void Point::print() const  {
	printf("(%i,%i,%i)", x, y, z);
}


/** Function returns integer value for the distance between the points passed
 *  in. This function can be used only for Diophantine Equations.
 *
 */


int getDistance(const Point &a, const Point &b) {
	int x = (b.x - a.x) * (b.x - a.x);
	int y = (b.y - a.y) * (b.y - a.y);
	int z = (b.z - a.z) * (b.z - a.z);

	return (x + y + z);
}


/** Function returns a double-precision floating point value for the distance
 *  between two points.
 */

double getDistanceDouble(const Point &a, const Point &b) {
	return (sqrt((double) getDistance(a,b)));
}