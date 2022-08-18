#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};

// Adding Display Function :
void Display(Array arr)
{
    // Looping thourgh the Array and Printing the Elements:
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << "   ";
    }
    cout << endl;
}