/*************************************************************************************************************************
 *
 *	Pointers:
 *      1. Declaration
 *      2. Initialization
 *      3. Dereferencing
 *      4. Dynamic Allocation
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Dynamic Memory:
    // Pointer is storing memory address:
    int *p = new int[10]{1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}