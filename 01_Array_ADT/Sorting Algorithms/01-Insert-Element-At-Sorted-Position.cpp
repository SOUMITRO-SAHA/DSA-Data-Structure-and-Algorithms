/***************************************************************************
 *  Sorting Algorithms :
 *  Table of Content :
 *      1. isSorted ()
 *	    2. Inserting an Element at Sorted Position:
 *      3. Rearranging the numbers :
 *
 ***************************************************************************/
#include <bits/stdc++.h>
#include "../00-CustomArray-HeaderFile.h"
using namespace std;

// isSorted() Function :
bool isSorted(Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

// InsertElementAtSortedPosition() function;
/* Given Array Must be Sorted */
void InsertElementAtSortedPosition(Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

void rearrangingNumbers(Array *arr)
{
    int i = 0, j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;

        if (i < j)
            swap(arr->A[i], arr->A[j]);
    }
}

int main()
{
    Array arr = {{1, 2, 3, 7, 8, 10, 12, 15, 18}, 20, 9};
    // Displaying the Array:
    Display(arr);

    // Calling isSort() Function:
    (isSorted(arr)) ? cout << "True" << endl : cout << "False" << endl;

    // Calling InsertElementAtSortedPosition() :
    InsertElementAtSortedPosition(&arr, 11);
    // Displaying the Array:
    Display(arr);

    Array arr1 = {{-2, 5, -9, 8, 3, -3, 0}, 20, 7};

    // Displaying the Array:
    Display(arr1);

    // Calling rearranging function :
    rearrangingNumbers(&arr1);
    // Displaying the Array:
    Display(arr1);

    return 0;
}