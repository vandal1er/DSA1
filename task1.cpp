#include <iostream>

using namespace std;

int findMax(int* arr, int size)
{
	long max = -99999999999;
	
	for(int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	return max;
}

int main()
{
	int arraySize;
	cout << "Enter size of array: ";
	cin >> arraySize;
	
	int array[arraySize];
	
	for(int i = 0; i < arraySize; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> array[i];
	}
	
	int maxElement = findMax(array, arraySize);
	cout << "Maximum element: " << maxElement;
	
	return 0;
}
