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
