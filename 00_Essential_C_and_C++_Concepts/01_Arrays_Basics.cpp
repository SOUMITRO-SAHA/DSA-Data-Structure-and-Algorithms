/*************************************************************************************************************************
 *
 *	Array Basic:
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void displayArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  // Array On Stack:
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  // Print the Array Using For-loop:
  cout << "Displaying the Array using For-Loop:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Print the Array Using For-each loop:
  cout << "Displaying the Array using For-each Loop:" << endl;
  for (int x : arr)
  {
    cout << x << " ";
  }
  cout << endl;

  // Array on Heap memoy:
  // Declarating of Array Dynamically {Automatically assign the array data to garbage values}.
  int *array = new int[5];
  int *array2 = new int[5]{1, 2, 3, 4, 5}; // Declaration and Initialization.
  int sizeofArray = 5;

  // Printing the Array Data:
  cout << "Dynamic Array: " << endl;
  displayArray(array, sizeofArray);

  cout << "Dynamic Array: " << endl;
  displayArray(array2, sizeofArray);

  return 0;
}