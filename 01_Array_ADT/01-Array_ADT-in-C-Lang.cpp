/*************************************************************************************************************************
 *
 *  Array ADT :
 *      Here we are going to create an Array Data Structure from Scratch in C Language. We also going to covert this C code to CPP code in the next file.
 *
 *
 *  Details about the Functions :
 *
 *  Display() -> It will print all the Array element one by one.
 *  Add() / append() -> It's basically add the element to the end of the array.
 *  Insert() -> It will insert a number at any given index.
 *
 *
 *	 Notes:
 *  Demo Array data : 10, 20, 30, 40, 50
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};

// Function Displaying the Array :
void Display(Array arr)
{
    int i;
    cout << "Elemnts are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << "   ";
    }
    cout << endl;
}

// Function for Add / Append:
void append(Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

int main()
{
    // Method -1:
    /*
    // Declearing the Array:
    Array arr;
    cout << "Enter the size of the Array: ";
    cin >> arr.size;

    // Initialising the Array;
    arr.A = new int(arr.size);
    arr.length = 0; // Setting the length to Zero [Initial length]

    // Taking User inputs for the Array Elements ;
    cout << "Enter all the Elements : ";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = arr.size; // Setting the length to the actuall size of the Array.

    */

    // Method - 2:
    Array arr = {{2, 3, 4, 5, 6}, 20, 5};

    // Displaying the Array:
    Display(arr);

    // Calling the append() function:
    append(&arr, 20);

    // Displaying the Array:
    Display(arr);

    return 0;
}