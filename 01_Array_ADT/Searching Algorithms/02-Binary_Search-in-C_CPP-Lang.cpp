/*************************************************************************************************************************
 *
 *	Binary Search :
 *      to perform Binary Search we need 3 things :
 *          1. low
 *          2. high
 *          3. mid = (low + high) /2 ;
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

// Binary Search Function:
int BinarySearch(Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
            return mid;

        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else if (key > arr.A[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}

// Binary Search function Using Recursion :
int RecursiveBinarySearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RecursiveBinarySearch(a, l, mid - 1, key);
        else
            return RecursiveBinarySearch(a, mid + 1, h, key);
    }
    return -1;
}

int main()
{
    Array arr = {{2, 5, 7, 9, 13, 17, 19}, 20, 7};
    // Displaying the Array:
    Display(arr);

    int key;
    cout << "Enter the Key ";
    cin >> key;

    // Calling the Binary Search Function :
    cout << "The key is found at = " << BinarySearch(arr, key);
    cout << endl;
    // Calling the Recursive Binary Search Function:
    cout << "The key is found by Recursive Call at = " << RecursiveBinarySearch(arr.A, 0, arr.length, key);

    return 0;
}