/*************************************************************************************************************************
 *
 *	Find Single Missing Element in an Array.
 *   Method - 1 : Iterative Method.
 *   Method - 2 : Recursive Method.
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}; // First n'th Natural Numbers.
    int length = sizeof(arr) / sizeof(arr[0]);        // Length of the Array.

    // Iterative Approach:
    int sum = 0;
    int n_term = arr[length - 1];

    // Sum of All the elements in the Array;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    // Sum of the first n'th natural elements;
    int s = n_term * (n_term + 1) / 2;

    // There, for the Missing Number will be =
    int missingNumber = s - sum;
    cout << "Missing No. = " << missingNumber << endl;

    return 0;
}