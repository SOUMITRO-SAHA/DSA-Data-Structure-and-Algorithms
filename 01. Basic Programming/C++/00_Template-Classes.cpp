/*************************************************************************************************************************
 *
 *	Template Classes:
 *  Demo Normal Class:
 *  #include <bits/stdc++.h>
 *   using namespace std;
 *
 *   class Arithmetic
 *   {
 *       T a;
 *       T b;
 *
 *   public:
 *       Arithmetic() { a = b = 1; }
 *       Arithmetic(T a, T b)
 *       {
 *           this->a = a;
 *           this->b = b;
 *       }
 *
 *       T add();
 *       T sub();
 *   };
 *   T Arithmetic::add()
 *   {
 *       T c = a + b;
 *       return c;
 *   }
 *
 *   T Arithmetic::sub()
 *   {
 *       T d = a > b ? a - b : b - a;
 *       return d;
 *   }
 *
 *   T main()
 *   {
 *       Arithmetic a(20, 10);
 *       cout << "Add: " << a.add() << endl;
 *       cout << "Sub: " << a.sub() << endl;
 *       return 0;
 *   }
 *
 * Task: Convert the Above C++ Class to Template Class.
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arithmetic
{
    T a;
    T b;

public:
    Arithmetic() { a = b = 1; }
    Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    T add();
    T sub();
};

template <class T>
T Arithmetic<T>::add()
{
    T c = a + b;
    return c;
};
template <class T>
T Arithmetic<T>::sub()
{
    T d = a > b ? a - b : b - a;
    return d;
};

int main()
{
    Arithmetic<float> a(20.0, 10.445);
    cout << "Add: " << a.add() << endl;
    cout << "Sub: " << a.sub() << endl;
    return 0;
}