# DSA (Data Structure and Algorithms)
***Description :*** 
It is a repository of DSA "a complete guide to DSA". Here I convert each and every DS and Algorithms into C++, JavaScript, Java, and Python language and There may be other languages that will be added in future.

---


[Introduction to Data Structures](#introduction-to-data-structures)


## Introduction to Data Structures :
### What is Data ?

> Data is the collection of different numbers, symbols, and alphabets to represent information.

### What is Data Structure ?
> A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

A data structure in not only used for organizing the data. It is also used for processing, retrieving, and Storing data. There are different basic and advanced types of data structures that area used in almost every programm or software system that has been developed. So we must have good knowledge about data structures.

The choice of a good data structure makes it possible to perform a variety of critical operations effectively. An efficient data structure also uses minimum memory space and execution time to process the structure.

**Classification of Data Structure :**
<div style ="text-align:center">

![](https://media.geeksforgeeks.org/wp-content/uploads/20220520182504/ClassificationofDataStructure-660x347.jpg)

</div>

[Source Geeksforgeeks.org](https://www.geeksforgeeks.org/data-structures/)

#### Type of Data Structure :
1. Linear Data Structure.
2. Non-Linear Data Structure.

##### Linear Data Structure :
- Elements are arranged in one dimension, also known as linear dimension.
- Example: lists(Array), stack, queue, etc.

##### Non-Linear Data Structure

- Elements are arranged in one-many, many-one and many-many dimensions.
- Example: tree, graph, table, etc.

#### Uses of DS :

##### Data structures are used in various fields such as:

- Operating system
- Graphics
- Computer Design
- Blockchain
- Genetics
- Image Processing
- Simulation etc.

[Source Geeksforgeeks.org](https://www.geeksforgeeks.org/introduction-to-data-structures/?ref=lbp)


## Essential C and C++ Concepts :


#### Arrays Basics: (Todo: Work Pending...)


## C++ STL :

[[C++ STL Notes]](/C%2B%2B%20STL/README.md)

## Array ADT :

Array as **ABSTRACT DATA TYPE**. Abstract Data Types means representation of data and the set of operations on the data. Array is a basic data structure provided by every programming language. So, representational data is defined by the compiler itself. But, the operations on the data is not given by the compiler. We are supposed to implement or provide operations on a data structure.
So, data structure and a set of operations together we can call it ADT.

**Data :**
1. Array space
2. size
3. length (Number of elemnets)

**Operations :**
1. Display();           --> O(n);
2. add() / append();    --> O(1);
3. insert(index X);     --> O(n);   //Worst Case when index = 0; Best Case when index = arr.length(last element).
4. delete(index);       --> O(n);   //Worst Case when index = 0; Best Case when index = arr.length(last element).
5. search(X);           
   1. Linear Search
   2. Binary Search
6. get(index);
7. set(index, X);
8. max() / min();
9.  reverse();
10. shift() / rotate();

[[Notes for C Language]](./01_Array_ADT/01-Array_ADT-in-C-Lang.md)

[[Notes for C++ Language]](./01_Array_ADT/Converting%20C%20to%20C%2B%2B/Array-ADT-in-C%2B%2B.cpp)



