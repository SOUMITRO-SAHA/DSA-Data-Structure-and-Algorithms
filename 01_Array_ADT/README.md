  # Array ADT Note for C - Language : 

  ## **Creating Array ADT Data Structure from Scratch :**

**First Declearing a struct for Array (Basic Data Structure for Array ADT) :**

```cpp
struct Array {
    int *A;
    int size;
    int length;
};
```

**Function for Displaying all the elements in the Array :**

```cpp

// Struct for Displaying the Array :
void Display(Array arr)
{
    int i;
    cout << "Elemnts are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << "   ";
    }
    cout << endl;
};

```

**Declaring the Array struct and then Taking inputs from user :**

```cpp
int main()
{
    //Declearing the Array:
    Array arr;
    cout << "Enter the size of the Array: ";
    cin >> arr.size;

    // Initialising the Array;
    arr.A = new int(arr.size);
    arr.length = 0; // Setting the length to Zero [Initial length]

    // Taking User inputs for the Array Elements ;
    cout << "Enter all the Elements : ";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }

    //Setting the length to the actuall size of the Array.
    arr.length = arr.size; 

    // Displaying the Array:
    Display(arr);

    return 0;
}
```
##### Input :

```bash
Enter the size of the Array: 5

Enter all the Elements : 10 20 30 40 50
```

##### Output :

```bash
Elemnts are : 10   20   30   40   50 
```

## Declearing and Initialising the Array simultaneously :


To Decleare an Array and Initialise the Array simultaneously, We have to make some changes while we construct out Array structure.

We have to change `int *A`  in the  ` struct Array`

```diff
- int *A;
+ int A[20]
```

```cpp
struct Array {
    int A[20]; //We have to fixed the Array size.
    int size;
    int length;
};
```
**Declare and Initialize the Array struct Simultaneously :**

```cpp
int main(){
    Array arr = {{2,3,4,5,6}, 20, 5};

    // Displaying the Array:
    Display(arr);

    return 0;
}
```
##### Output :

```bash
Elemnts are : 2   3   4   5   6
```

## **Add() / append() function :**

```cpp
// Function for Add / Append:
void append(Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
}
```

##### `Main ()` :

```cpp
int main(){
    Array arr = {{2, 3, 4, 5, 6}, 20, 5};

    // Displaying the Array:
    Display(arr);

    // Calling the append() function:
    append(&arr, 20);

    // Displaying the Array:
    Display(arr);

    return 0;
}
```

#### Output :

```bash
Elemnts are : 2   3   4   5   6   
Elemnts are : 2   3   4   5   6   20
```

## **Insert() function :**

```cpp
// Function for Insert :
void Insert(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            // Shifting the Elements
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
```

##### `main ()` :

```cpp
int main()
{
    Array arr = {{2, 3, 4, 5, 6}, 20, 5};

    // Displaying the Array:
    Display(arr);

    // Calling the Insert() function :
    Insert(&arr, 3, 33); // Inserting 33 at Index 3.

    // Displaying the Array after inserting 33 at index 3:
    Display(arr);

    return 0;
}
```
#### Output:

```bash
Elemnts are : 2   3   4   5   6   
Elemnts are : 2   3   4   33   5   6 
```

## **Delete() function :**

```cpp
// Function for Delete() function :
int Delete(Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index <= arr->length - 1)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
```

##### `main ()` :

```cpp
int main()
{
    Array arr = {{2, 3, 4, 5, 6}, 20, 5};

    // Displaying the Array:
    Display(arr);

    // Calling the Delete() function :
    Delete(&arr, 3); //It will delete the element at index 3.

    // Displaying the Array after inserting 33 at index 3:
    Display(arr);

    return 0;
}
```

#### Output:

```bash
Elemnts are : 2   3   4   5   6   
Elemnts are : 2   3   4   6
```

[[Main Source Code]](./01-Array_ADT-in-C-Lang.cpp)

# **Linear Search :**

In Linear Search we search the given key one by one. Hence, the time-complexity is **Linear** **[ O(n) ]** . Linear Search is also known as Sequential Search.

### **Time Complexity: O(N)**
### **Auxiliary Space: O(1)**

![](https://res.cloudinary.com/practicaldev/image/fetch/s--7JTlg-F5--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/mosr7vmazyxi18uc328c.jpg)

**Time-Complexity Graph :**

![](https://res.cloudinary.com/practicaldev/image/fetch/s--ubl8U54i--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/1b07zcs5rofsa4jbtrq8.png)

[Image Source](https://dev.to/ayabouchiha/linear-search-algorithm-31dn)

#### **Linear-Search Algorithm :**

```cpp
// Linear-Search function :
int LinearSearch(Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}
```
#### `main()` :

```cpp
int main()
{
    Array arr = {{10, 20, 30, 40, 50}, 20, 5};

    // Displaying the Array :
    Display(arr);

    // Calling the LinearSearch Function:
    int result = LinearSearch(arr, 20);

    // Printing the Result : (Using Ternary operation)
    result < 0 ? cout << "key is not found!" << endl : cout << "Key is found at Index " << result << endl;

    return 0;
}
```
[[Ternary operation Best Resource]](https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp)

##### Output :

```bash
Elemnts are : 10   20   30   40   50   
Key is found at Index 1
```

#### Before Continuing the study. Let's Convert the Ternary Operator Output to a Function :

```cpp
// Function for Displaying the Index number :
void PrintResult(int result)
{
    // Printing the Result : (Using Ternary operation)
    result < 0 ? cout << "key is not found!" << endl : cout << "Key is found at Index " << result << endl;
}
```

#### **Improving the Linear-Search Algorithm :**

It is observed that when we searching for any key element, then there is a posibility that we are going to search for the same element for the next time as well.

---

Let me give some example: let's just say that, if you have a box, if you have a collection of books in the shelf.

You have search for a particular book and you take out the book and read it again. You keep it back.

Then, What is the possibility that again tomorrow you will search for the same book? 

Here the posibility is more likely that you will search for the same book again.

---

So, to improve the linear Search we have two opetions.

  1. Transposition
  2. Move to Front/Move to Head

### **Transposition :**

In transposition, if the key element is found, it is swapped to the element an index before to increase in a number of search count for a particular key.

[[Detailed Article]](https://www.geeksforgeeks.org/improving-linear-search-technique/)

#### **Improved Linear-Search Algorithm : (Transposition)**

```cpp
// Function for Swapping the Elements :
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Improved Linear Search function:
int ILinearSearchTransposition(Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            // Swapping the elements:
            swap(&arr->A[i], &arr->A[i - 1]);

            return i;
        }
    }
    return -1;
}
```

#### `main()` :

```cpp

int main()
{
    Array arr = {{10, 20, 30, 40, 50}, 20, 5};

    // Displaying the Array :
    Display(arr);

    // Calling the LinearSearch Function:
    int result = LinearSearch(arr, 20);

    // Calling PrintResutl() function :
    PrintResult(result);

    // **************** [Improved Linear Search] **************** //

    /* 1. Transposition */

    // Calling the LinearSearch Function:
    int improvedResult1 = ILinearSearchTransposition(&arr, 50);

    // Displaying the Array :
    Display(arr);

    // Calling PrintResutl() function :
    PrintResult(improvedResult1);
}
```

##### Output :

```bash
Elemnts are : 10   20   30   40   50
Key is found at Index 1
Elemnts are : 10   20   30   50   40
Key is found at Index 4
```

### **Move to Front :**

In this method, if the key element is found then it is directly swapped with the index 0, so that the next consecutive time, search operation for the same key element is of O(1), i.e., constant time. 

#### **Improved Linear-Search Algorithm : (Move to Front)**

```cpp
// Function for Swapping the Elements :
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Improved Linear Search function:
int ILinearSearchMoveToFront(Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            // Swapping the elements:
            swap(&arr->A[i], &arr->A[0]);

            return i;
        }
    }
    return -1;
}
```

#### `main()` :

```cpp

int main()
{
    Array arr = {{10, 20, 30, 40, 50}, 20, 5};

    // Displaying the Array :
    Display(arr);

    // Calling the LinearSearch Function:
    int result = LinearSearch(arr, 20);

    // Calling PrintResutl() function :
    PrintResult(result);

    // **************** [Improved Linear Search] **************** //

    /* 2. Move to Front */

    // Calling the LinearSearch Function:
    int improvedResult2 = ILinearSearchMoveToFront(&arr, 50);

    // Displaying the Array :
    Display(arr);

    // Calling PrintResutl() function :
    PrintResult(improvedResult2);

    return 0;
}
```

##### Output :

```bash
Elemnts are : 10   20   30   40   50   
Key is found at Index 1
Elemnts are : 50   20   30   40   10   
Key is found at Index 4
```

[[Main Code of Linear Search]](./Searching%20Algorithms/01-Linear_Search-in-C-Lang.cpp)


# **Binary Search :**

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log n).

## Binary Search Algorithm :

The basic steps to perform Binary Search are:
- Begin with the mid element of the whole array as a search key.
- If the value of the search key is equal to the item then return an idex of the search key.
- Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
- Otherwise, narrow it to the upper half.
- Repeatedly check from the second point until the value is found or the interval is empty.

### Binary Search Algorithm can be implemented in the following two ways :
1. Iterative Method.
2. Recursive Method.

## 1. Iteration Method :
```cpp
// Binary Search Function:
int BinarySearch(Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
            return mid;

        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else if (key > arr.A[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}
```
## 2. Recursive Method :
```cpp
// Binary Search function Using Recursion :
int RecursiveBinarySearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RecursiveBinarySearch(a, l, mid - 1, key);
        else
            return RecursiveBinarySearch(a, mid + 1, h, key);
    }
    return -1;
}
```

### Illustration of Binary Search Algorithm :

<!-- Binary Search Image -->
![](https://media.geeksforgeeks.org/wp-content/uploads/20220309171621/BinarySearch.png)

[[**Source**]](https://www.geeksforgeeks.org/binary-search/)

### Detailed Binary Search Algorithm :

#### CPP Code :
```cpp
/****************************************************************************
 *	Binary Search :
 *      to perform Binary Search we need 3 things :
 *          1. low
 *          2. high
 *          3. mid = (low + high) /2 ;
***************************************************************************/
#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

// Function Displaying the Array :
void Display(Array arr)
{
    int i;
    cout << "Elemnts are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << "   ";
    }
    cout << endl;
}

// Function for Swapping the Elements :
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Binary Search Function:
int BinarySearch(Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
            return mid;

        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else if (key > arr.A[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
}

// Binary Search function Using Recursion :
int RecursiveBinarySearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RecursiveBinarySearch(a, l, mid - 1, key);
        else
            return RecursiveBinarySearch(a, mid + 1, h, key);
    }
    return -1;
}

int main()
{
    Array arr = {{2, 5, 7, 9, 13, 17, 19}, 20, 7};
    // Displaying the Array:
    Display(arr);

    int key;
    cout << "Enter the Key ";
    cin >> key;

    // Calling the Binary Search Function :
    cout << "The key is found at = " << BinarySearch(arr, key);
    cout << endl;
    // Calling the Recursive Binary Search Function:
    cout << "The key is found by Recursive Call at = " << RecursiveBinarySearch(arr.A, 0, arr.length, key);

    return 0;
}
```

#### Output :

```bash
Elemnts are : 2   5   7   9   13   17   19
Enter the Key 9
The key is found at = 3
The key is found by Recursive Call at = 3
```
## **Time Complexity: O(log n)**

## **Auxiliary Space : O(1)**

[[c++ Language Source Code]](./Searching%20Algorithms/02-Binary_Search-in-C_CPP-Lang.cpp)


