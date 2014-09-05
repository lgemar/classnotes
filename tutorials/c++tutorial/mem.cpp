

int main()
{
	int* arr; 
	// array gets allocated on the heap; arrays allocated on the heap must be released
	arr = new int[50];
	// array gets initialized on the stack
	int arr2[50];

	for (int i = 0; i < 50; i++)
	{
		arr[i] = i;
		*(arr + i) = i;
	}
	delete[] arr;
	return 0;
}
