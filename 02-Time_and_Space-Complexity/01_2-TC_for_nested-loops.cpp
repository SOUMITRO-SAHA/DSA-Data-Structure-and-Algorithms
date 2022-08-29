/*************************************************************************************************************************
 *
 *	Time Complexity for Nested Loops :
 *      Theoretical Analysis ==> We can easily see that here the T-C is Quadratic / aka, O(n^2).
 *      Let's Log the Experimental Data Here,
 *          n   || Time
 *         10   ->  34ms
 *         100  ->  4038ms
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Your Code
    cout << "Enter n = ";
    int n;
    cin >> n;

    // Logging the time :
    int star_time = clock();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + j << "   ";
        }
        cout << endl;
    }
    int end_time = clock();

    cout << "Total Time Take is = " << end_time - star_time << "ms" << endl;

    return 0;
}