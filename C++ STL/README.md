# C++ Standard Template Library (STL)

The STL is a set of C++ template classes to probide common programming data structure and functions such as lists, stacks, arrays,etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. Working knowledge of template Classes is a prerequisite for working with STL.

> Similarly, In Java there is Java Collection.

[[source GeeksforGeeks]](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)

## Containers :

> *Container is an object that stores a collection of other objects(elements)*
> 
> Container manages the storage space for its elements & provides member functions to access them (mostly through iterators)
> 
> Example - Stack, Map, Vector etc.

### Containers are mainly divided into 4 categories :

---
| Sequence Containers | Associative Containers | Unordered Associative Containers | Containers Adaptors |
| :-----------------: | :--------------------: | :------------------------------: | :-----------------: |
|        Array        |          Set           |          Unordered Set           |        Stack        |
|       Vector        |          Map           |          Unordered Map           |        Queue        |
|        Deque        |        Multiset        |        Unordered Multiset        |   Priority Queue    |
|    Forward List     |        Multimap        |        Unordered Multimap        |                     |
|        List         |                        |                                  |                     |
---

**Operations that we are mostly performs is** -
- Insertion
- Searching
- Deletion

## STL has 4 Components

1. Algorithms
2. Containers
3. Functions
4. Iterators

<br>

# Algorithms

The header algorithm defines a collection of functions specially designed to be used on a range of elements. They act on containers and provide means for various operations for the contents of the containers.

### Algorithm

- Sorting
- Searching

-----------------------------------------------------------------
---

<br>
# Pair in C++ STL :

>Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heretogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in `<utility>` header consisting of two data elements of objects.

- The first element is referenced as 'first' and the second element as 'second' and the order is fixed (first,second).
- Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type 'pair' by default in which all the 'first' elements are unique keys associated with their 'second' value objects.
- To access the elements, we use variable name followed by dot.operator followed by the keyword first or second.

## Syntex :
```cpp
pair(data_type1, data_type2) pair_name;
```

```cpp
// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;
  
// Driver Code
int main()
{
    // defining a pair
    pair<int, char> PAIR1;
  
    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';
  
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
  
    return 0;
}
```
## Output :
```shell
100 G
```

### **Initializing a Pair:** We can also initialize a pair.

## **Syntax:**

`pair (data_type1, data_type2) Pair_name (value1, value2) ;`

### Different ways to initialize pair:
```cpp
pair p1;            //default
pair p2(1, 'a');    //Initialized, different data type
pair p3(1,10);      //Initialized, same data type
pair p4(p3);        //Copy of p3
```

## **Member Functions**
1. make_pair();
2. swap();
3. tie();

## 1. make_pair()

> This template function allows to create a value pair without writing the types explicitly.

## **Syntex"**
`Pair_name = make_pair(value1, value2);`

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, char> PAIR1;
    pair<string, double> PAIR2("GeeksForGeeks", 1.23);
    pair<string, double> PAIR3;
  
    PAIR1.first = 100;
    PAIR1.second = 'G';
  
    PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);
  
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
  
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
  
    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;
  
    return 0;
}
```

## Output:

```shell
100 G
GeeksForGeeks 1.23
GeeksForGeeks is Best 4.56
```

## 2. swap:

>This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of the same type.

### **syntax:**
`pair1.swap(pair2);`

For two given pairs say pair1 and pair2 of the same type, the swap function will swap the pair1.first with pair2.first and pair1.second with pair2.second.

```cpp
#include <iostream>
#include <utility>
  
using namespace std;
  
int main()
{
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);
  
    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
    pair1.swap(pair2);
  
    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
  
    return 0;
}
```

### Output:

```shell
Before swapping:
 Contents of pair1 = A 1Contents of pair2 = B 2
After swapping:
 Contents of pair1 = B 2Contents of pair2 = A 1
```

## 3. tie(): 

This function works the same as in tuples. It creates a tuple of lvalue references to its arguments i.e., to unpack the tuple (or here pair) values into separate variables. Just like in tuples, here are also two variants of the tie, with and without “ignore”. “ignore” keyword ignores a particular tuple element from getting unpacked. 
However, tuples can have multiple arguments but pairs only have two arguments. So, in the case of pair of pairs, unpacking needs to be explicitly handled. 

### Syntax: 

`tie(int &, int &) = pair1; `

```cpp
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    pair<int, int> pair1 = { 1, 2 };
    int a, b;
    tie(a, b) = pair1;
    cout << a << " " << b << "\n";
  
    pair<int, int> pair2 = { 3, 4 };
    tie(a, ignore) = pair2;
  
    // prints old value of b
    cout << a << " " << b << "\n";
  
    // Illustrating pair of pairs
    pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };
    int x, y;
    char z;
  
    // tie(x,y,z) = pair3; Gives compilation error
    // tie(x, tie(y,z)) = pair3; Gives compilation error
    // Each pair needs to be explicitly handled
    x = pair3.first;
    tie(y, z) = pair3.second;
    cout << x << " " << y << " " << z << "\n";
}
```

### Output :

```shell
1 2
3 2
3 4 a
```

# Arrays in C++ STL :

>Array Class in introduced C++11 has offered a better alternative for c-style arrays.

## **Important Methods:**

```shell
at();
operator[]
front();
back();
size();
max_size();
```
### ***Time-complexity*** for all operations we have seen are O(1) operations.

# Vectors in C++ STL :
>Dynamic arrays with the ability to resize itself automatically when an element is inserted.
>
>Contiguous store locations, reallocation happens when underlying array is full.

## **Important Methods:**

```shell
[]
at();

front();
back();

begin();
end();

capacity();

clear();
empty();
erase();

insert();
pop_back();
push_back();

reserve();
resize();
size();
```

# Deque in C++ STL :

>Double-ended queue is sequence containers with dynamic sizes that can be expanded or contracted on both ends (front or back)
>
> deques are guaranteed to store all its elements in contiguous storage locations : accessing elements in a deque by offsetting a pointer to another element causes undefined behavior.
> 
> Elements of a deque can be scattered in different chunks of storage.