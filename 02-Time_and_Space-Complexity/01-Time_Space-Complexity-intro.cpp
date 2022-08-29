/*************************************************************************************************************************
 *
 *	Time and Space Complexity :
 *       Here we are gonna decide or calculate/analyze time & space complexity theoretically. [We are gonna use Big O Notation]
 *       { The theory is covered in the Readme.md file in depth.}
 *
 *      In this section we are gonna cover how you can measure the time-complexity experimentally [Experimentatl Analysis]
 *      To measure the time We need to add `<ctime>` libary as we already using `<bits/stdc++.h>`. Hence we do not need to use that.
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
// #include <ctime>
using namespace std;
int main()
{
    // Your Code
    cout << "Enter n = " << endl;
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    // Init a Reverse Sorted Array
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }

    // Experimental Analysis :
    auto start_time = clock();
    sort(arr.begin(), arr.end());
    auto end_time = clock();

    cout << "The total Time Taken to run this Programme is = " << end_time - start_time << "ms" << endl;

    return 0;
}