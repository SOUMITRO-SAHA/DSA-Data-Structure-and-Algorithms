#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void rotate90DegAntiClockwise(int arr[3][3], int n)
{
    // Rotating (90 deg) Anti-clock wise:
    int right = n - 1;
    int i = 0;
    while (right >= 0)
    {
        for (int j = 0; right >= 0 && j < n; j++)
        {

            int temp = arr[i][j];
            arr[i][j] = arr[j][right];
            arr[j][right] = temp;
        }
        i++;
        right--;
    }
}
void rotate90DegClockwise(int arr[3][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../I_O/input.txt", "r", stdin);
    freopen("../I_O/output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    // Array :
    int arr[n][n];

    // Taking Input:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Transpose a Matrix ::
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            arr[j][i] = temp;
        }
    }

    // Print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}