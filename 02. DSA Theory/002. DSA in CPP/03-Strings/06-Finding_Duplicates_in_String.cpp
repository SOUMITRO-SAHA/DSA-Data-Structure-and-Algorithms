#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "finding";
    array<int, 25> H;
    H.fill(0);
    for (int i = 0; i < s1.length(); i++)
    {
        H[s1[i] - 97] += 1;
    }
    for (int j = 0; j < H.size(); j++)
    {
        if (H[j] > 1)
        {
            cout << j + 97 << "  =  " << (char)(j + 97) << endl;
        }
    }

    return 0;
}