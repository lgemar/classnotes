#include <iostream>
using namespace std;

int main()
{
	// c++ is a strongly typed language...every variable must have a type
	// usually you assign a value 
	int x = 3;

	/*
	if (<condition>)
	{
		<statements>
	}
	else if (<condition>)
	{
		<statements>
	}
	else
	{
	}
	*/

	if (x > 5)
	{
		cout << "x is larger than 5" << endl;
	}
	else if (x < 5)
	{
		cout << "x is smaller than 5" << endl;
	}
	else
	{
		cout << "x is" << x << endl;
	}

	int num = 1;
	while (num < 10)
	{
		cout << "num is " << num << endl;
		//num = num + 1;
		//++num;
		num++;
	}

	for (int i = 1; i < 10; i+=2)
	{
		cout << "i is " << i << endl;
	}
	return 0;
}
