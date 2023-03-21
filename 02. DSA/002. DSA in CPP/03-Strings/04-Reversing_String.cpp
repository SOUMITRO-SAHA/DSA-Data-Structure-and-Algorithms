#include <bits/stdc++.h>
using namespace std;

// Print
void print(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}

// Swap
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Reverse a String :
void reverse(string &str)
{
    int l = 0;
    int h = str.length() - 1;
    while (l <= h)
    {
        // Swapping the Characters
        swap(&str[l], &str[h]);
        l++, h--;
    }
}

int main()
{
    string str = "Soumitra";
    string num = "123456789";

    // Revers
    reverse(str);
    reverse(num);

    print(str);
    print(num);

    return 0;
}