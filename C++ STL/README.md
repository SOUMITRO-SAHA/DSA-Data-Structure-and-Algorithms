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
