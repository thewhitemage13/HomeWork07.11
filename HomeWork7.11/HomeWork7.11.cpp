﻿#include <ctime>
#include <iostream>
using namespace std;

void SetSize(unsigned int* size, int a, int b)
{
    if (*size < a)
    {
        *size = a;
    }
    else if (*size > b)
    {
        *size = b;
    }
}

void AllocateMemory(int** arr, unsigned int size)
{
    *arr = new int[size];
}

void FillArray(int* ar, unsigned int size, int number1, int number2)
{
    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % (number1 - number2);
    }
}

void ShowArray(int* ar, int unsigned size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}

void FreeMemory(int* ar)
{
    delete[]ar;
}

int main()
{
    srand(time(NULL));

    unsigned int size;
    int* ar;
    int number1;
    int number2;

    cout << "Enter size of array: ";
    cin >> size;
    cout << "Start: ";
    cin >> number1;
    cout << "Finish: ";
    cin >> number2;

    SetSize(&size, 10, 100000);
    AllocateMemory(&ar, size);
    FillArray(ar, size, number1, number2);
    ShowArray(ar, size);
    FreeMemory(ar);
}