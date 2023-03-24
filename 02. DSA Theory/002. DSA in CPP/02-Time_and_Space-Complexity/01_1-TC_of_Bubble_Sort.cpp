/*************************************************************************************************************************
 *
 *	Time-Complexity of Bubble Sort:
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// Compare Function :
bool compare(int a, int b)
{
    return a > b;
}

// Sort the Elements in increasing Order:
void Bubble_Sort(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        // repeated swapping :
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compare(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

// Displaying the Array/Vector :
void Display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Your Code
    cout << "Enter n = ";
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    // init a Reverse Sorted Array ;
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
    Display(arr);

    // Time Count Start :
    auto start_time = clock();
    Bubble_Sort(arr, n);
    auto end_time = clock();
    // Time Count end :

    Display(arr);

    cout << "Total Time Taken to Complete the Process is = " << end_time - start_time << "ms" << endl;

    /*
        So after getting the results we can sya that Bubble Sort follows Quadratic Equation.
        Time-Complexity = O (n^2);
    */

    return 0;
}