/*************************************************************************************************************************
 *
 *	Swap Alternate Elements in an Array
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// Swap Function;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Print
void print(int a[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Swap Alternative Elements Function :
void swapAlternateEl(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }

    // Calling Print ;
    print(arr, size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};    // Even Case;
    int arr1[] = {10, 20, 30, 40, 50}; // Odd Case;

    int size_arr = sizeof(arr) / sizeof(int);
    int size_arr1 = sizeof(arr1) / sizeof(int);

    swapAlternateEl(arr, size_arr);
    swapAlternateEl(arr1, size_arr1);

    return 0;
}