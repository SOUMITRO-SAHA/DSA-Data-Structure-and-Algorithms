/*************************************************************************************************************************
 *
 *	Given "WELCOME"; Convert it to lower Case.
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void print(string str)
{
    // Print
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
int main()
{
    string str = "WELCOME"; // 1.
    str = "WeLcOMe";        // 2.

    // Changing to Lower Case :
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }

    // Print:
    print(str);

    // Changing to Upper Case :

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }

    // Print
    print(str);

    return 0;
}