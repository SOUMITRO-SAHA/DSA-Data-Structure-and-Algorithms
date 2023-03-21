#include <bits/stdc++.h>
using namespace std;

// print :
void print(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

// swap
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    vector<int> a = {1, 2, 0, 0, 0, 2, 0, 2, 1, 1, 1, 2};

    // print
    print(a);

    // Sorting the Array from 0->1->2 in sorted order.
    sort(a.begin(), a.end());

    // print
    print(a);

    return 0;
}