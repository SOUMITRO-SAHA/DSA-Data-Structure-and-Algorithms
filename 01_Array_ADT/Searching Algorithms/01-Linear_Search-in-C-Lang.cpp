/*************************************************************************************************************************
 *
 *	Search Algorithms :
 *      Table of Content :
 *          1. Linear Search
 *          2. Improving Linear Search
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

struct Array
{
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

// Function for Swapping the Elements :
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Linear-Search function :
int LinearSearch(Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

// Improved Linear Search function:
int ILinearSearchTransposition(Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            // Swapping the elements:
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

// 2. Move to Front ;
int ILinearSearchMoveToFront(Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            // Swapping the elements:
            swap(&arr->A[i], &arr->A[0]);

            return i;
        }
    }
    return -1;
}

// Function for Displaying the Index number :
void PrintResult(int result)
{
    // Printing the Result : (Using Ternary operation)
    result < 0 ? cout << "key is not found!" << endl : cout << "Key is found at Index " << result << endl;
}

int main()
{
    Array arr = {{10, 20, 30, 40, 50}, 20, 5};

    // Displaying the Array :
    Display(arr);

    // Calling the LinearSearch Function:
    int result = LinearSearch(arr, 20);

    // Calling PrintResutl() function :
    PrintResult(result);

    // **************** [Improved Linear Search] **************** //

    // /* 1. Transposition */

    // // Calling the LinearSearch Function:
    // int improvedResult1 = ILinearSearchTransposition(&arr, 50);

    // // Displaying the Array :
    // Display(arr);

    // // Calling PrintResutl() function :
    // PrintResult(improvedResult1);

    /* 2. Move to Front */

    // Calling the LinearSearch Function:
    int improvedResult2 = ILinearSearchMoveToFront(&arr, 50);

    // Displaying the Array :
    Display(arr);

    // Calling PrintResutl() function :
    PrintResult(improvedResult2);

    return 0;
}