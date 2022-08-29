# Strings 

C++ has in its definition a way to represent a sequence of characters as an object of the class. This Class is called `std::string`.
String class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

## ASCII Code / Character set:

All the character that you find in the keyboard, there is some ASCII code available.

### What is ASCII Code ?

> ASCII (American Standard Code for Information Interchange) is the most common character encoding format for text data in computers and on the internet. In standard ASCII-encoded data, there are unique values for 128 alphabetic, numeric or special additional characters and control codes.

<br>

<img src="https://upload.wikimedia.org/wikipedia/commons/d/dd/ASCII-Table.svg" alt="" style="background-color: #fff; margin: 0 auto;padding: 10px 20px;width:100%; max-width: 800px">

<br>

## Where do we use ASCII Code in our System :

Character set is the set of characters that are supported by a programming language like C, C++ or any other language, so the set of characters supported by a language will be same as the set of characters that are supported by any computer system.

We know well, that computer system works on binary number system, so everything in the computer is numbers, then how they can support characters.
So basically they don't support character, then how we make them work on characters.

We will define some set of numbers as characters. So it means for every character, we define some numeric value, so we get some numeric codes.

So yes, for the English alphabets, for every character, there are some codes defined and those codes are standard codes. Every electronic machine follows that same set of codes, and those codes are called as American Standard
Code for Information Interchange that is ASCII code or ASCII codes.

And moreover for other national languages (like Hindi, Japanese, etc.) the codes are defined as **Unicode**

## More About ASCII Codes :

The codes are starting from 0 and ends at 127. Thus, there are total 128 Ascii codes are there. 

So, to represent this ASCII code 7-bits are sufficient but while allocating the memory in main memory that is in the RAM, seven bits are not allocated minimum 1-Byte is allocated. Hence the size of Character Data type is 1-Byte.

## How to Declare Character type variable in C++ :

```cpp
char name;      //Declare Char 
name = 'A';     // Init name. ✅

name = 'AB';    // X ❌
name = A;       // X ❌
name = "A";     // X ❌
```

## Creating a character Array :

```cpp
char ch[10]; //Declaring the Char Array not Initialized

//Declaring + Initialized
char ch[5] = { 'A', 'B', 'C', 'D', 'E'}; 

char ch[] = { 'A', 'B', 'C', 'D', 'E'};

char ch[10] = { 'A', 'B', 'C', 'D', 'E'};

char ch[] = "Soumitra";
```

## How do you know where the string is Ending :

```cpp
char name[10] = {'S','o', 'u', 'm', 'i', 't', 'r', 'a', '\0'}
// '\0' is called String Delimiter or Null Character or String Terminator.
```


## String  Vs  Char Array

| String                                                                                                                                                          | Char Array                                                                                                                                                     |
| :-------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| A String is a class that defines objects that be represented as a stream of characters.                                                                         | A Character array is simply an array of characters that can be terminated by a null character.                                                                 |
| In the case of strings, memory is allocated dynamically. More memory can be allocated at run time on demand. As no memory is preallocated, no memory is wasted. | The size of the character array has to be allocated statically, more memory cannot be allocated a run time if required. Unused allocated memory is also wasted |
| As strings are represented as objects, no array decay occurs.                                                                                                   | There is a threat of [array decay](). In the case of the character array.                                                                                      |
| Strings are slower when compared to implementation than character array                                                                                         | Implementation of character array is faster than std::string.                                                                                                  |
| String class defines a number of functionalities that allow manifold operations on strings                                                                      | Character arrays do not offer many inbuilt functions to manipulate strings.                                                                                    |

## How to change Case in a String :

As we know that ASCII code Starts form A = 65 and ends at Z = 90 and for lower Case a = 97 to z = 122;

so the difference between the UpperCase and LowerCase 
$$a - A  = 97 - 65   = 32$$

> We have keep in mind that the lower case letters having higher number then Upper Case letters in ASCII codes.

**Algorithms :**

### **Upper Case to Lower Case :**

Given `s = "WELCOME`; convert it to lower case.

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "WELCOME";

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = str[i] + 32;
    }

    // Print
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Output :
```bash
w e l c o m e 
```

### **Toggle between cases :**

Given `s = "WeLcOMe";` convert it in Upper Case and Lower Case.

```cpp
#include <bits/stdc++.h>
using namespace std;

void print(string str)
{
    // Print
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
int main()
{
    string str = "WELCOME"; // 1.
    str = "WeLcOMe";        // 2.

    // Changing to Lower Case :
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }

    // Print:
    print(str);

    // Changing to Upper Case :

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }

    // Print
    print(str);

    return 0;
}
```
### Output :

```bash
w e l c o m e 
W E L C O M E 
```

### **Counting Words and Vowels in a String :**

```cpp
#include <bits/stdc++.h>
using namespace std;

// Print
void print(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}

// Get Count => Vowel, Consonant, Upper Case, Lower Case :

void getCount(string s)
{
    // Counting the Letters for Vowel and Consonant in a String;
    int vowel = 0;
    int consonant = 0;
    int upperCase = 0;
    int lowerCase = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                vowel++;
            else
                consonant++;

            upperCase++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowel++;
            else
                consonant++;

            lowerCase++;
        }
    }

    cout << "Total No. of Vowel is = " << vowel << endl
         << "and Consonant is = " << consonant << endl
         << "Total Count of Upper Case is = " << upperCase << endl
         << "Total Count of Lower Case is = " << lowerCase << endl;
}

int main()
{
    string s = "Soumitra";
    string str = "WelCome";

    // Calling
    getCount(s);
    cout << endl;
    getCount(str);

    return 0;
}
```

### Output :

```bash
Total No. of Vowel is = 4
and Consonant is = 4
Total Count of Upper Case is = 1
Total Count of Lower Case is = 7

Total No. of Vowel is = 3
and Consonant is = 4
Total Count of Upper Case is = 2
Total Count of Lower Case is = 5
```

### **Reversing a String :**

```cpp
#include <bits/stdc++.h>
using namespace std;

// Print
void print(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}

// Swap
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Reverse a String :
void reverse(string &str)
{
    int l = 0;
    int h = str.length() - 1;
    while (l <= h)
    {
        // Swapping the Characters
        swap(&str[l], &str[h]);
        l++, h--;
    }
}

int main()
{
    string str = "Soumitra";
    string num = "123456789";

    // Revers
    reverse(str);
    reverse(num);

    print(str);
    print(num);

    return 0;
}
```

### Output :

```bash
a r t i m u o S 
9 8 7 6 5 4 3 2 1 
```
## **Comparing Strings and Checking Palindrome :**

```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Checking if the word is Palindrom or not.
    string pal = "madam";
    for (int i = 0, j = pal.length() - 1; i <= j; i++, j--)
    {
        if (pal[i] != pal[j])
        {
            cout << "It is not a Palindrome" << endl;
            break;
        }
        else
        {
            if (i == j)
                cout << "It is a Palindrome" << endl;
        }
    }

    // Comparing two Stirng.
    string s1 = "Painting";
    string s2 = "Painter";

    for (int i = 0, j = 0; i < s1.length() || j < s2.length(); i++, j++)
    {
        if (s1[i] != s2[j])
        {
            cout << i << endl;
            break;
        }
        else
            cout << "Palindrom" << endl;
    }

    return 0;
}
```
## Output :

```bash
It is a Palindrome
Palindrom
Palindrom
Palindrom
Palindrom
Palindrom
5
```

## Finding Duplicates in a String :

We can find duplicates in a String through multiples methods. Like using nested for loops, using hash table, and also uaing Bitwise Operators etc.


## Operations on Strings 
 ## **1. Input Functions**

 | Function      |                                                 Definition                                                 |
 | :------------ | :--------------------------------------------------------------------------------------------------------: |
 | `getline()`   | This function is used to store a stream of characters entered as entered by the user in the object memory. |
 | `push_back()` |                    This function is used to input a character at the end of the string.                    |
 | `pop_back()`  |  Introduced from C++11 (for strings), this function is used to delete the last character form the string.  |

 ### CPP :

 ```cpp

 ```

 ## **2. Capacity Function :**

 | Function          |                                                                                                                      Definition                                                                                                                       |
 | :---------------- | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
 | `capacity()`      | This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently. |
 | `resize()`        |                                                                                 This function changes the size of the string, the size can be increased or decreased.                                                                                 |
 | `length()`        |                                                                                                     This function finds the length of the string.                                                                                                     |
 | `shrink_to_fit()` |         This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.         |






 [[Sourcee GeeksforGeeks]](https://www.geeksforgeeks.org/stdstring-class-in-c/)