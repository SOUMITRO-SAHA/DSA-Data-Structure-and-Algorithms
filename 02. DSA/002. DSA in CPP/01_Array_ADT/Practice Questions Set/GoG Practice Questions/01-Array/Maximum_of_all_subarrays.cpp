#include <bits/stdc++.h>
using namespace std;
vector<int> max_of_subarrays(int *arr, int n, int k)
{
    vector<int> ans;
    multiset<int> s;
    int S = 0;
    int E = 0;
    while (E < k)
    {
        s.insert(arr[E]);
        E++;
    }
    ans.push_back(*s.rbegin());
    while (E < n)
    {
        s.erase(s.find(arr[S]));
        s.insert(arr[E]);
        ans.push_back(*s.rbegin());
        S++;
        E++;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;

    vector<int> ans;
    ans = max_of_subarrays(arr, n, k);

    // Print :
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}