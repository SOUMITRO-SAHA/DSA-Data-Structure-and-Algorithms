/*************************************************************************************************************************
 *
 *	 Arrays in C++ :
 *      In order to use array, there are two ways to use array,
 *          1. Classical approach that we used most of the time
 *          2.  Array STL.
 **************************************************************************************************************************/
#include <bits/stdc++.h>
// #include <array>
using namespace std;
/* 1. Classical Array */
// Array Passing to a function;
// Array is passed by reference
void updateArray(int arr[], int i, int val)
{
    arr[i] = val;
}

void print(int arr[], int sz)
{

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/* 2. Array STD */
// We have to pass the value by reference
void updateArraySTL(array<int, 10> &arr, int i, int val)
{
    arr[i] = val;
}

void printArraySTL(const array<int, 10> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "    ";
    }
    cout << endl;
}
int main()
{
    // 1. Classical approach :
    int arr[20] = {1, 2, 3, 4, 5, 6}; // Init list.
    int size = sizeof(arr) / sizeof(arr[0]);

    // actual array is updated
    updateArray(arr, 10, 99);

    // print
    print(arr, size);

    // 2. Array STL

    // array<data_type, size_of_array> array_name;
    array<int, 10> arr1 = {1, 2, 39, 4, 30, 6, 17, 9, 10}; // Object

    // print
    // print(arr1, arr1.size()); It not going to work keep in mind.

    updateArraySTL(arr1, 5, 100);
    printArraySTL(arr1);

    /* Some Basic Operation on Array */
    // sort
    sort(arr1.begin(), arr1.end());
    printArraySTL(arr1);

    // fill
    arr1.fill(5);
    printArraySTL(arr1);

    // for-each loop:
    for (int x : arr1)
        cout << x << "  ";
    cout << endl;
    return 0;
}