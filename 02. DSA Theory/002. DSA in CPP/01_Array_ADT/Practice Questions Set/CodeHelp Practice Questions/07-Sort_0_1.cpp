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

// Print Time in ms :
void timeTaken(clock_t s, clock_t e)
{
    cout << "Total Time Taken = " << e - s << " ms" << endl;
}

int main()
{
    // Sort 0, 1 in an Array :
    vector<int> arr1 = {1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0};
    vector<int> arr2 = arr1;

    cout << "Sorting :" << endl;
    auto start_time = clock();
    sort(arr1.begin(), arr1.end()); // O(N Log N)
    auto end_time = clock();

    timeTaken(start_time, end_time);

    // Print
    print(arr1);

    // Optimized Solution would be :- Two Pointer Approach : O(n);
    cout << "Two Pointer : " << endl;
    auto s_time = clock();
    for (int i = 0, j = arr2.size() - 1; i < j;)
    {
        if (arr2[i] == 0)
        {
            i++;
        }
        else if (arr2[j] == 1)
            j--;

        else if (arr2[i] == 1 && arr2[j] == 0)
        {
            // Swap
            swap(arr2[i], arr2[j]);
            i++;
            j--;
        }
    }
    auto e_time = clock();

    timeTaken(s_time, e_time);

    // print
    print(arr2);

    return 0;
}