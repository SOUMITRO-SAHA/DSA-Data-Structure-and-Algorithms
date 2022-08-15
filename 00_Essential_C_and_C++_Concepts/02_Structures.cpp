/*************************************************************************************************************************
 *
 *	Structures in C & C++:
 *      1. Defining Structure.
 *      2. Size of Structure.
 *      3. Declaring a Structure.
 *      4. Accessing Members.
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// Defining a Structure:
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Declaring the Structure:
    struct Rectangle r1;

    // Assigin/Initializing the values:
    r1.length = 10;
    r1.breadth = 5;

    // Declaring and Initializing:
    Rectangle r2 = {20, 15};

    printf("The length of the Rectangle is %d and the bredth of the rectangle is %d and the Size of the rectangle is %d", r1.length, r1.breadth, sizeof(r1));

    cout << endl
         << "It is for Rectangle 2" << endl;

    printf("The length of the Rectangle is %d and the bredth of the rectangle is %d and the Size of the rectangle is %d", r2.length, r2.breadth, sizeof(r2));

    return 0;
}