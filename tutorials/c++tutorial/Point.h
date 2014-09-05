
#include <iostream>
using namespace std;
class Point
{
	// these are the data memebers of the class
	public:
		// sometimes data members are prefixed by m_ 
		double x;
		double y;;
	
	void print()
	{
		cout << "[" << x << ", " << y << "]" << endl;
	}

	double get_x()
	{
		return x;
	}
};
