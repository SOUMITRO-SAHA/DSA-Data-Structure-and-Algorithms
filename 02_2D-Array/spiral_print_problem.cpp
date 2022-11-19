#include <iostream>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../I_O/input.txt", "r", stdin);
    freopen("../I_O/output.txt", "w", stdout);
#endif
    int n;
    int m;
    cin >> n >> m;

    // Array :
    int arr[n][m];

    // Taking Input:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Counter
    int count = 0;
    int total = n * m;
    // Spiral Print Problem :
    int top = 0, left = 0;
    int bottom = n - 1, right = m - 1;
    while (count < total)
    {
        // 1st L -> R, Top = Constant
        for (int i = left; count < total && i <= right; i++)
        {
            cout << arr[top][i] << "  ";
            count++;
        }
        top++;

        // 2nd -> top -> bottom, right = Constant
        for (int j = top; count < total && j <= bottom; j++)
        {
            cout << arr[j][right] << "  ";
            count++;
        }
        right--;

        // 3rd : Right -> Left, bottom = Constant
        for (int i = right; count < total && i >= left; i--)
        {
            cout << arr[bottom][i] << "  ";
            count++;
        }
        bottom--;

        // 4th : bottom -> top, left = Constant
        for (int i = bottom; count < total && i >= top; i--)
        {
            cout << arr[i][left] << "  ";
            count++;
        }
        left++;
    }

    return 0;
}