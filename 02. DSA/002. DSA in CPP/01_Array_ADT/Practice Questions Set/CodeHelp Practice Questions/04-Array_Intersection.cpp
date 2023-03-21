#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {4, 9, 5};
    int arr2[] = {9, 4, 9, 8, 4};

    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    vector<int> v;
    set<int> s;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            s.insert(arr1[i]);
            i++, j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
            j++;
    }

    for (int k : s)
    {
        cout << "Set = " << k << endl;
        v.push_back(k);
    }

    // Print :
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}