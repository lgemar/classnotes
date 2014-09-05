
// if Point is define in the same directory / folder use ""
#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1;
	Point p2;

	p1.x = 5.1;
	p1.y = 6.2;

	p2.x = 8.5;
	p2.y = 4.0;

	p1.print();
	p2.print();

	return 0;	
}
