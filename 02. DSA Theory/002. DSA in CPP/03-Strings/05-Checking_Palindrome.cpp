#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Checking if the word is Palindrom or not.
    string pal = "madam";
    for (int i = 0, j = pal.length() - 1; i <= j; i++, j--)
    {
        if (pal[i] != pal[j])
        {
            cout << "It is not a Palindrome" << endl;
            break;
        }
        else
        {
            if (i == j)
                cout << "It is a Palindrome" << endl;
        }
    }

    // Comparing two Stirng.
    string s1 = "Painting";
    string s2 = "Painter";

    for (int i = 0, j = 0; i < s1.length() || j < s2.length(); i++, j++)
    {
        if (s1[i] != s2[j])
        {
            cout << i << endl;
            break;
        }
        else
            cout << "Palindrom" << endl;
    }

    return 0;
}