/*************************************************************************************************************************
 *
 *	Hashing / Hash Table --> In cpp the unordered_map is used as hash table
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> menu; // Init empty hash table.

    // Inserting key value pair inside the hash table.
    menu["Pizza"] = 299;
    menu["Popcorn"] = 80;
    menu["Cold-Drinks"] = 60;
    menu["Cold-Coffee"] = 100;
    menu["Masala-Coce"] = 500;

    // Update Query --> O(1)
    menu["Popcorn"] = (1 + 0.1) * menu["Popcorn"]; // Price Increases 10%.

    // Deletion in Hash Table -> O(1)
    menu.erase("Popcorn");

    // Iterate over the Hash Table :
    for (pair<string, int> item : menu)
    {
        cout << item.first << " = " << item.second << endl;
    }

    // Searching in Hash Table; --> T-C is O(1).
    cout << "Enter the Food Item name = ";
    string item;
    cin >> item;
    if (menu.count(item) == 0)
    {
        cout << item << " is not available in the menu and its cost " << menu[item] << endl;
    }
    else
    {
        cout << item << " is available in the menu and its cost " << menu[item] << endl;
    }

    return 0;
}