/*************************************************************************************************************************
 *
 *	Converting C Language program to C++ Language program
 *
 *  Demo : input --> 6
 *  2 3 7 9 13 14
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

// Array - ADT Class :
class Array
{
    int *A;
    int size;
    int length;

    // It's not required outside of this class. Hence It's Private.
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

public:
    // Constructors
    Array()
    {
        length = 0;
        size = 10;
        A = new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[sz];
    }

    // Destructor
    ~Array()
    {
        delete[] A;
    }
    /* Getter and Setter */
    int getLength()
    {
        return length;
    }

    /* Extra Function */
    void Display();

    void Append(int x);
    void Insert(int index, int x);

    int Pop();
    int Delete(int index);

    int Get(int index);
    void Set(int index, int x);

    int Max();
    int Min();
    int Sum();
    float Average();

    /* Advanced Functions */
    int LinearSearch(int key);
    int BinarySearch(int key);
    int RBinarySearch(int l, int h, int key);

    void ReverseArray();

    void Rearrange();

    bool isSorted();
    void InsertElementAtSortedPosition();
    void RearrangingNumbers();
};

void Array::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << "   ";
    }
    cout << endl;
}

void Array::Append(int x)
{
    if (length < size)
    {
        A[length] = x;
        length++;
    }
}
void Array::Insert(int index, int x)
{
    if (length < size)
    {
        length++;
        for (int i = length; i >= index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
    }
}

int Array::Pop()
{
    int deletedNo = A[length - 1];
    length--;
    return deletedNo;
}
int Array::Delete(int index)
{
    if (index >= 0 && index <= length - 1)
    {
        int deletedNo = A[index];
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;

        return deletedNo;
    }
    return -1;
}

int Array::Get(int index)
{
    if (index >= 0 && index <= length - 1)
        return A[index];

    return -1;
}
void Array::Set(int index, int x)
{
    if (index >= 0 && index <= length - 1)
    {
        A[index] = x;
    }
}

int Array::Max()
{
    int maxElement = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        if (A[i] > maxElement)
            maxElement = A[i];
    }
    return maxElement;
}
int Array::Min()
{
    int minElement = INT_MAX;
    for (int i = 0; i < length; i++)
    {
        if (A[i] < minElement)
            minElement = A[i];
    }
    return minElement;
}
int Array::Sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += A[i];
    }
    return sum;
}
float Array::Average()
{
    return Sum() / (float)length;
}

int Array::LinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] == key)
            return i;
    }
    return -1;
}
int Array::BinarySearch(int key)
{
    int l = 0, h = length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}
int Array::RBinarySearch(int l, int h, int key)
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            return RBinarySearch(l, mid - 1, key);
        else
            return RBinarySearch(mid + 1, h, key);
    }

    return -1;
}

// Optimized One: [Do not required any Extra Space]
void Array::ReverseArray()
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        swap(&A[i++], &A[j--]);
        // cout << &A[i++] << " , " << &A[j--] << endl;
    }
}
void Array::Rearrange()
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        while (A[i] < 0)
            i++;
        while (A[j] > 0)
            j--;
        if (i < j)
            swap(&A[i], &A[j]);
    }
}

// bool Array::isSorted()
// {
// }
// void Array::InsertElementAtSortedPosition()
// {
// }
// void Array::RearrangingNumbers()
// {
// }

int main()
{
    // Declaring the Array:
    Array *arr;

    int size = 10;
    arr = new Array(size);

    // Taking Input for the Array:
    // Manually Taking Input:
    arr->Append(20);
    arr->Append(30);
    arr->Append(50);
    arr->Append(22);
    arr->Append(11);
    arr->Append(56);

    // Taking Input form User Provided Data:
    /*
    int inputSize;
    cout << "Enter the total Number of Inputs Less than 10 :" << endl;
    cin >> inputSize;
    cout << "Enter the Inputs : " << endl;
    for (int i = 0; i < inputSize; i++)
    {
        int input;
        cin >> input;
        arr->Append(input);
    }
    */
    // Calling the Display Function:
    arr->Display();

    // Inserting at index 3:
    arr->Insert(3, 69);

    // Pop() form the Array ==> Last Element in the Array will be deleted.
    cout << "POP: " << arr->Pop() << endl;

    cout << "Delete " << arr->Delete(4) << endl; // Deleting the 4'th Indexed element.

    arr->Set(4, 99); // Set the 4'th Indexed element to 99

    // Calling the Display Function:
    arr->Display();

    cout << "Get = " << arr->Get(2) << endl;
    cout << "Max = " << arr->Max() << endl;
    cout << "Min = " << arr->Min() << endl;
    cout << "Sum = " << arr->Sum() << endl;
    cout << "Average = " << arr->Average() << endl;

    // Searching:
    cout << arr->LinearSearch(30) << endl;
    cout << arr->BinarySearch(30) << endl;

    cout << "Recursive B-S : " << arr->RBinarySearch(0, arr->getLength(), 30) << endl;

    // Calling Reverse Array function:
    arr->ReverseArray();
    // Calling the Display Function:
    arr->Display();

    arr->Append(-2);
    arr->Append(-11);
    arr->Append(-56);

    // // Rearranging the Negatives to the Left and Positive to the Right.
    arr->Rearrange();
    // Calling the Display Function:
    arr->Display();

    return 0;
}