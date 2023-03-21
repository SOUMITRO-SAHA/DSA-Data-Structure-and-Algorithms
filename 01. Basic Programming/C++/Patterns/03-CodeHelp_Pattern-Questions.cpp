#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Question - 1 :
    int n;
    cout << "Enter n = ";
    cin >> n;
    /*
    // for-loop :
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // while-loop :

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // Question - 2 :
    int i = n;
    while (i > 0)
    {
        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i--;
    }
    // Question - 3 :
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    // Question - 4 :
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
    */
    // Question - 5 :
    int i = 1;
    char ch = 65;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            j++;
        }
        ch++;
        cout << endl;
        i++;
    }

    return 0;
}