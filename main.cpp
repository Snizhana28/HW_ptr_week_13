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

    cout << "Array " << endl;
    randArray(arr, size);
    printArray(arr, size);
    arrayCopy(arr, arr2, size);


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
        *(arr2 + i) = *(arr + i);

    }
    for (int j = 0; j < size / 2; j++)
    {
        int k = *(arr + j);
        *(arr + j) = *(arr + size - 1 - j);
        *(arr + size - 1 - j) = k;
    }

    for (int n = 0; n < size; n++)
    {
        cout << *(arr + n) << " ";
    }
    cout << endl; 
}