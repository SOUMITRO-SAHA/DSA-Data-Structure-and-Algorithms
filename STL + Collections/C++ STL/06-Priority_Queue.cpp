/*************************************************************************************************************************
 *
 *	Priority Queue in C++ STL :
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 15, 19, 13, 7, 92};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int> pq; // Max Heap

    priority_queue<int, vector<int>, greater<int>> min_heap; // Min Heap

    for (int x : arr)
    {
        pq.push(x);
        min_heap.push(x);
    }

    // for max heap
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    // for min heap
    while (!min_heap.empty())
    {
        cout << min_heap.top() << endl;
        min_heap.pop();
    }

    return 0;
}