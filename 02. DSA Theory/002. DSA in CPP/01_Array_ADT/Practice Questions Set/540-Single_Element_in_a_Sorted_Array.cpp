/*************************************************************************************************************************
 *
 *	This is demo Solution: Here, I am gonna solve the Question with out using STL Libary. But, to solve the main question on LeetCode You need to know about STL Library in CPP.
 *
 *  Question: Here the Question is We are given a sorted Array of which a single numbers appears twice except a single element which only repeat once. So we have to find out that no. only.
 *
 * Solution 1:
 *      1. My best guess is to use some basic concepts of set theory to find the unique elements in the array.
 *      2. Then, add the elements && Multiply it my 2 to get the Actual Sum should be of the Element in the Array.
 *      3. &&, Add all the elements of the Array (Actual Sum of all the elements in the Array.)
 *      4. Then, Subtract them to find the difference.
 *  Solution 2:
 *      We can also solve this problem using Binary Search.
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    int sum_of_elements = 0;
    int sum_should_be = 0;
    // Finding the Sum of all the Unique numbers
    for (int i = 0; i < length; i++)
    {
        sum_of_elements += arr[i];
        if (arr[i] != arr[i + 1])
            sum_should_be += arr[i];
    }

    int result = (sum_should_be * 2) - sum_of_elements;
    cout << "The Missing Element is " << result << endl;

    // Converting the above method using Vector:

    vector<int> num = {1, 1, 2, 2, 3, 3, 4, 5, 5}; // Declaring the Vector elements
    // cout << num[0] << endl;                        // How to access the Vector elements.

    // cout << num.size() << endl; // To find the length .

    int sum_of_elements_vector = 0;
    int sum_should_be_vector = 0;
    // Finding the Sum of all the Unique numbers
    for (int i = 0; i < num.size(); i++)
    {
        sum_of_elements_vector += num[i];
        if (num[i] != num[i + 1])
            sum_should_be_vector += num[i];
    }

    int result_vector = (sum_should_be_vector * 2) - sum_of_elements_vector;
    cout << "The Missing Element is " << result_vector << endl;

    return 0;
}