#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Question - 1" << endl
         << endl;
    /*
    *****
    *****
    *****
    *****
    *****
    */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Question - 2" << endl
         << endl;
    ;
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Question - 3" << endl
         << endl;
    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
     */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "Question - 4" << endl
         << endl;
    /*
    1
    22
    333
    4444
    55555
     */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << "Question - 5" << endl
         << endl;

    /*
     * * * * *
     * * * *
     * * *
     * *
     *
     */
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Question - 6" << endl
         << endl;
    /*
    12345
    1234
    123
    12
    1
     */
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "Question - 7" << endl
         << endl;

    /*

     */
    for (int i = 0; i < 5; i++)
    {
        static int star = 1;
        static int spaceCount = 5;
        for (int k = spaceCount; k > 0; k--)
        {
            cout << " ";
        }
        spaceCount--;

        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
        star += 2;
    }

    cout << "Question - 8" << endl
         << endl;
    for (int i = 0; i < 5; i++)
    {
        static int spaceCount = 0;
        static int starCount = 9;
        for (int j = 0; j < spaceCount; j++)
        {
            cout << " ";
        }
        spaceCount++;
        for (int k = starCount; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
        starCount -= 2;
    }

    // Todo: Pattern Question Due.
    return 0;
}