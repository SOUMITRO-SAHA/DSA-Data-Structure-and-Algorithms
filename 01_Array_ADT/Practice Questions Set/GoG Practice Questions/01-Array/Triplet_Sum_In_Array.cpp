#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool find3Numbers(int A[], int n, int x)
    {
        int l = 0;
        int mid = 0;
        int h = n - 1;
        while (mid <= h)
        {
            if (A[l] + A[mid] + A[h] == x)
                return 1;
            while (A[l] + A[mid] + A[h] <= x)
            {
                mid++;
            }
            l++;
            h--;
        }
        return 0;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;
        int i, A[n];
        for (i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.find3Numbers(A, n, x) << endl;
    }

    return 0;
}