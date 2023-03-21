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

// Get Count => Vowel, Consonant, Upper Case, Lower Case :

void getCount(string s)
{
    // Counting the Letters for Vowel and Consonant in a String;
    int vowel = 0;
    int consonant = 0;
    int upperCase = 0;
    int lowerCase = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vowel++;
            else
                consonant++;

            upperCase++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowel++;
            else
                consonant++;

            lowerCase++;
        }
    }

    cout << "Total No. of Vowel is = " << vowel << endl
         << "and Consonant is = " << consonant << endl
         << "Total Count of Upper Case is = " << upperCase << endl
         << "Total Count of Lower Case is = " << lowerCase << endl;
}

int main()
{
    string s = "Soumitra";
    string str = "WelCome";

    // Calling
    getCount(s);
    cout << endl;
    getCount(str);

    return 0;
}