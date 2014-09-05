
#include <iostream>
using namespace std;


int power(int base, int exp);
double power(double base, int exp);
void foo();
void increment(int &x);
int divide(int numerator, int denominator, int &rem);

int main()
{
	cout << "3 to the power of 3: " << power(3,3) << endl;
	cout << "3.5 to the power of 3: " << power(3.5,3) << endl;
	foo();

	// it is possible to pass by reference
	int i = 4;
	increment(i);
	cout << "i is now: " << i << endl;
	return 0;
}

int divide(int numerator, int denominator, int &rem)
{
	int result;
	rem = 6;
	return result;	
}

void increment(int &x)
{
	x = x + 1;
}

int power(int base, int exp)
{
	int result = 1; 
	for (int i = 0; i < exp; i++)
	{
		result = result * base;
	}
	return result;
}

double power(double base, int exp)
{
	int result = 1; 
	for (int i = 0; i < exp; i++)
	{
		result = result * base;
	}
	return result;
}

// function that returns void
void foo()
{
	cout << "hello world" << endl;
}
