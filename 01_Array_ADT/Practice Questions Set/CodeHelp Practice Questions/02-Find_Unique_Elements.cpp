#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int sz)
{
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        // XOR Operation :
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8};
    int sz = sizeof(arr) / sizeof(int);
    int uniqueNo = findUnique(arr, sz);

    cout << "The Unique Element is = " << uniqueNo << endl;

    return 0;
}