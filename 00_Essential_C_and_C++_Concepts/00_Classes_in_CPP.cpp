/*************************************************************************************************************************
 *
 *	Classes and Constructor in CPP:
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle() { length = breadth = 1; }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area();
    int perimeter();

    int getLength() { return length; }
    int getBreadth() { return breadth; }

    void setLength(int l) { length = l; }
    void setBreadth(int b) { breadth = b; }
};

int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}