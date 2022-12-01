// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>
using namespace std;

void randArray(int* arr, int size);
void printArray(int* arr, int size);
void arrayCopy(int* arr, int* arr2, int size);

int main()
{
	int size = 10;
	int* arr = new int[size];
	int* arr2 = new int[size];

	randArray(arr, size);
	randArray(arr2, size);

	cout << "Array 1" << endl;
	printArray(arr, size);
	cout << "Array 2" << endl;
	printArray(arr2, size);
	delete[] arr;

	arr = new int[size];
	arrayCopy(arr, arr2, size);

	cout << "Array 1" << endl;
	printArray(arr, size);
	cout << "Array 2" << endl;
	printArray(arr2, size);

	delete[] arr;
	delete[] arr2;

	return 0;
}
void randArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 80 + 1;
	}
}
void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
void arrayCopy(int* arr, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = *(arr2 + i);
	}
}
