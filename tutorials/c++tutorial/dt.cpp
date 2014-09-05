#include <iostream>
using namespace std;

int main()
{
	// c++ is a strongly typed language...every variable must have a type
	// usually you assign a value 
	int x;
	cout << "uninitialized x: " << x << endl;
	x = 7; 
	// only one character can go between single quotes
	// single quotes are for single characters only; double quotes are for a string
	char ch = 'g';
	double num = 1.6;
	bool b = true; //or false, language is case-sensitive

	cout << "x=" << x << endl;
	return 0;
}
