#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	// ref becomes an alias for x
	int &ref = x;

	x++;
	ref++;
	cout << "x= " << x << " ref= " << ref << endl;
	return 0;
}
