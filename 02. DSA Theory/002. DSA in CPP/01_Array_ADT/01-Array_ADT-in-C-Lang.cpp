/*************************************************************************************************************************
 *
 *  Array ADT :
 *      Here we are going to create an Array Data Structure from Scratch in C Language. We also going to covert this C code to CPP code in the next file.
 *
 *
 *  Details about the Functions :
 *
 *  Display() -> It will print all the Array element one by one.
 *  Add() / Append() -> It's basically add the element to the end of the array.
 *  Insert() -> It will insert a number at any given index.
 *  Delete() --> It will delete a value/element at given index.
 *  Get() --> Return the element for given index.
 *  Set() -->
 *  Average() -->
 *  Max() -->
 *  Min() -->
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
    cout << "elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << "   ";
    }
    cout << endl;
}

// Function for Add / Append:
void Append(Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}

// Function for Insert :
void Insert(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            // Shifting the Elements
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

// Function for Delete() function :
int Delete(Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index <= arr->length - 1)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

// Function for Get and element:
int Get(Array arr, int index)
{
    // Checking whether the given index is valid or not:
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

// Set() function : [For setting an element at place of the given index]

void Set(Array *arr, int index, int x)
{
    // Checking whether the given index is valid or not:
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

// Max() Function: [To find the Max element in the Array]
int Max(Array arr)
{
    int max = arr.A[0];
    // looping through to find the Max element in the Array:
    for (int i = 1; i < arr.length; i++)
    {
        if (max < arr.A[i])
        {
            max = arr.A[i];
        }
    }
    return max;
}

// Min() Function: [To find the Min element in the Array]
int Min(Array arr)
{
    int min = arr.A[0];
    // looping through to find the Max element in the Array:
    for (int i = 1; i < arr.length; i++)
    {
        if (min > arr.A[i])
        {
            min = arr.A[i];
        }
    }
    return min;
}

// Sum() Function : [To find the sum of all the element]
int Sum(Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

// Average() function : [To find the Avg. of all the elements in the array]
float Average(Array arr)
{
    int sum = Sum(arr); // Calling the sum function;
    float totalLengthOfArray = arr.length;

    return sum / totalLengthOfArray;
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

    /*
    // Calling the append() function:
    Append(&arr, 20);

    // Displaying the Array after append() function:
    Display(arr);

    // Calling the Insert() function :
    Insert(&arr, 3, 33); // Inserting 33 at Index 3.

    // Displaying the Array:
    Display(arr);

    // Calling the Delete() function :
    Delete(&arr, 3);

    // Displaying the Array:
    Display(arr);
    */

    // ################# [ Get(), Set (),Max(), Min(), Sum(), Average()] ############ //

    // Calling the Get() Function :
    cout << "Get(arr, index) : " << Get(arr, 9) << endl;

    // Calling Set() :
    cout << "Set(Array *arr, int index, int x) : " << endl;
    Set(&arr, 4, 99);
    // Displaying the Array:
    Display(arr);

    cout << "Max(Array arr): " << Max(arr) << endl;
    cout << "Min(Array arr): " << Min(arr) << endl;
    cout << "Sum(Array arr): " << Sum(arr) << endl;
    cout << "Average(Array arr): " << Average(arr) << endl;

    return 0;
}