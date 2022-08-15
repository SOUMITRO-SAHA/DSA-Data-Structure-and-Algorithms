/*************************************************************************************************************************
 *
 *	Converting C to C++ Class:
 *  Demo c code:
 *  #include <bits/stdc++.h>
 *  struct Rectangle{
 *      int length;
 *      int bredth;
 *  };
 *  void initialize(Rectangle *r, int l,  int b){
 *       r->length = l;
 *       r->bredth = b;
 *  };
 *  int area(Rectangle r){
 *       return r.length * r.bredth;
 *  };
 *  void changeLength(Rectangle *r, int l){
 *       r->length = l;
 *  };
 *   using namespace std;
 *   int main()
 *   {
 *       Rectangle r;
 *
 *       initialize(&r, 10, 5);
 *       area(r);
 *       changeLength(&r, 20);
 *
 *       return 0;
 *   }
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    // This is Called Constructor: [Parametarised Constructor]
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle r;
    cout << r.area() << endl;
    r.initialize(10, 5);
    cout << r.area() << endl;
    r.changeLength(20);
    cout << r.area() << endl;

    return 0;
}