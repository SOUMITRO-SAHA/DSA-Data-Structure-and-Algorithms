## Table of Content

|                       Question                        |              Demo Solution              |                                                                              Resources                                                                               |
| :---------------------------------------------------: | :-------------------------------------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
|      Finding Single Missing Element in an Array       | [Demo](Find-Single-Missing-Element.cpp) |                                             [LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/)                                              |
|     Finding Multiple Missing Element in an Array      |                                         | [LeetCode](https://leetcode.com/problems/missing-number/#:~:text=Missing%20Number%20%2D%20LeetCode&text=Given%20an%20array%20nums%20containing,range%20%5B0%2C3%5D.) |
|         Finding Duplicates in a Sorted Array          |                                         |
|  Finding Duplicates in a Sorted Array using Hashing   |                                         |
|        Finding Duplicates in a Unsorted Array         |                                         |
|         Finding a Pair of Elements with sum K         |                                         |
| Finding a Pair of Elements with sum K in Sorted Array |                                         |
|         Finding Max and Min in a Single Scan          |                                         |
|                                                       |                                         |

---
## Question - 1 :

> Swap Alternate :

### Example :

```bash
{1, 2, 3, 4, 5, 6}

=> {2, 1, 4, 3, 6, 5}
```

### **Solution :**

```cpp
#include <bits/stdc++.h>
using namespace std;

// Swap Function;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Print
void print(int a[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Swap Alternative Elements Function :
void swapAlternateEl(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }

    // Calling Print ;
    print(arr, size);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};    // Even Case;
    int arr1[] = {10, 20, 30, 40, 50}; // Odd Case;

    int size_arr = sizeof(arr) / sizeof(int);
    int size_arr1 = sizeof(arr1) / sizeof(int);

    swapAlternateEl(arr, size_arr);
    swapAlternateEl(arr1, size_arr1);

    return 0;
}
```

## Question - 2 :

> Find Unique Element in an Array :

We can solve this kind of problems by using XOR Operations.

```cpp
#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int sz)
{
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        // XOR Operation :
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8};
    int sz = sizeof(arr) / sizeof(int);
    int uniqueNo = findUnique(arr, sz);

    cout << "The Unique Element is = " << uniqueNo << endl;

    return 0;
}
```

### Output :

```bash
The Unique Element is = 7
```

[Practice Question [Code Studio]](https://www.codingninjas.com/codestudio/problems/find-unique_625159?leftPanelTab=0)

[Practice Question [LeetCode]](https://leetcode.com/problems/unique-number-of-occurrences/)

## Question - 3 :

> Find duplicate Elements in an Array :

**Brut Force Approach :**

```cpp
int main()
{
    int arr[] = {4, 2, 1, 3, 1};
    int sz = sizeof(arr) / sizeof(int);

    //Brut Force Approach :
    unordered_map<int, int> hash;

    for (auto i : arr)
        ++hash[i];
    for (auto &j : hash)
    {
        if (j.second > 1)
        {
            cout << j.first << endl;
        }
    }



    return 0;
}
```

**Optimized Approached :**

```cpp
// Optimized Approached :
    int ans = 0;
    for (int i = 0; i < sz; i++)
    {
        ans ^= arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        ans ^= i;
    }
```

### Output :

```bash
1
```

[[CodeStudio]](https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?leftPanelTab=0)

[[LeetCode]](https://leetcode.com/problems/find-all-duplicates-in-an-array/)

## Question - 4 :

> Array Intersection 

### Example :

```bash
{1,2,3,4,5}
=> {3,4,5,6}
```

Algorithm :

```cpp
vector<int> v;
int i = 0, j = 0;
while (i < n && j < m)
{
    if (arr1[i] == arr2[j])
    {
        v.push_back(arr1[i]);
        i++, j++;
    }
    else if (arr1[i] < arr2[j])
    {
        i++;
    }
    else
        j++;
}
```

[[Code Studio]](https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?leftPanelTab=0)

[[LeetCode]](https://leetcode.com/problems/intersection-of-two-arrays/)

## Question - 5 :

> Pair Sum :

[[Code Studio]](https://www.codingninjas.com/codestudio/problems/pair-sum_697295)

[[LeetCode]]()

## Question - 6 :

> Triplet Sum :

## Question - 7 :

> Sort 0, 1 :

> Sort 0 , 1 and 2 :


## Question - 8 :

[Lecture - 12](https://www.youtube.com/watch?v=YJeoQBevNVo&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=12)

## Question - 9 :
## Question - 10 :
## Question - 11 :
## Question - 12 :
## Question - 13 :
## Question - 14 :



