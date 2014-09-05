
#include <iostream>
using namespace std;

void increment(int* x)
{
	*x = *x + 1;
}
int main()
{
	int x = 5; 
	int* ptr; 
	ptr = &x;
	cout << "ptr= " << ptr << " *ptr= " << *ptr << " x= " << x << endl;
	x++;
	cout << "ptr= " << ptr << " *ptr= " << *ptr << " x= " << x << endl;
	(*ptr)++;
	cout << "ptr= " << ptr << " *ptr= " << *ptr << " x= " << x << endl;

	increment(ptr);
	increment(&x);
	// increment(x) ; //compilation error because the type is wrong
	
	// a pointer can receive a special value
	/* this code doesn't work and I'm not sure why
	ptr = nullptr; // accessing this will produce a runtime crash
	if (ptr != nullptr)
	{
		cout << "ptr= " << ptr << " *ptr= " << *ptr << " x= " << x << endl;
	}
	*/
	return 0;
}
