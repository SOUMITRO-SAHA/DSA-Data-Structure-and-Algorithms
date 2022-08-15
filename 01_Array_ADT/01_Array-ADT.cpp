/*************************************************************************************************************************
 *
 *	Array ADT
 *      Table of Contents:
 *          Data:
 *              1. Array Space
 *              2. Size/Capacity.
 *              3. Length (No. of Elemnts)
 *          Operations:
 *              1. display();        ------------> O(n)
 *              2. Add(x)/Append(x); ------------> O(1)
 *              3. Insert (index);   ------------> O(n)
 *              4. Delete (index);
 *              5. Search(x);
 *              6. Get(index);
 *              7. set(index, x);
 *              8. Max()/Min();
 *              9. Reverse();
 *              10. Shift()/Rotate();
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class Array
{
    int *A;
    int size;
    int length;

public:
    Array()
    {
        size = length = 0;
    }
    Array(int s)
    {
        A = new int[s];
        size = s;
    }
    // Inserting the Elemtns:
    void insert(int i);
    // display Function:
    void display();
};
// Inserting the Elemtns:
void Array::insert(int i)
{
    A[length] = i;
    length++;
}
// display Function:
void Array::display()
{
    for (int i = 0; i <= length; i++)
    {
        cout << A[i] << "   ";
    }
    cout << endl;
}

int main()
{
    Array arr(10);
    // Inserting Elements to the Array:
    // Todo: insert is now working.
    // arr.insert(1);
    // arr.insert(2);
    // arr.insert(3);
    // arr.insert(4);

    // Displaying the Array:
    arr.display();

    return 0;
}