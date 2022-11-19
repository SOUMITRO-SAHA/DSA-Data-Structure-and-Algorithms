#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 2, 1, 3, 1};
    int sz = sizeof(arr) / sizeof(int);

    // Brut Force Approach :
    //  unordered_map<int, int> hash;

    // for (auto i : arr)
    //     ++hash[i];
    // for (auto &j : hash)
    // {
    //     if (j.second > 1)
    //     {
    //         cout << j.first << endl;
    //     }
    // }

    // Optimized Approached :
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        ans ^= arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        ans ^= i;
    }

    cout << ans << endl;

    return 0;
}