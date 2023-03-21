/*************************************************************************************************************************
 *
 *	Vectors in C++ STL:
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// print function:
void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Empty Container Constructor
    vector<int> first;

    // Fill Constructor ( 4 integers with value 20)
    vector<int> second(4, 20);

    // Range Constructor
    int num[] = {10, 20, 30, 40, 50};
    vector<int> third(num, num + 5);

    // Copy constructor
    vector<int> fourth(third);

    // Another Way
    vector<int> fifth = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    print(first);
    print(second);
    print(third);
    print(fourth);
    print(fifth);

    /* Some Important Methods */
    cout << "Important Functions of vector" << endl;
    cout << fifth.at(2) << endl;
    cout << fifth.front() << endl;
    cout << fifth.back() << endl;
    fifth.pop_back();
    fifth.push_back(99);

    print(fifth);

    return 0;
}