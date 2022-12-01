// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>
using namespace std;

void randArray(int* arr, int size);
void printArray(int* arr, int size);
void oppositeArray(int* arr, int size);

int main()
{
	int size = 10;
	int* arr = new int[size];
	cout << "Array " << endl;
	randArray(arr, size);
	printArray(arr, size);
	oppositeArray(arr, size);
	delete[] arr;

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
void oppositeArray(int* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int k = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = k;
	}
	for (int j = 0; j < size; j++)
	{
		cout << *(arr + j) << " ";
	}
	cout << endl;
}