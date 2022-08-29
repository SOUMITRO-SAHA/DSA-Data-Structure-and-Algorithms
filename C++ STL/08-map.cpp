/*************************************************************************************************************************
 *
 *	Map in C++ :
 *
 **************************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> menu;

    // Inserting key value pair inside the map; O(Log n)
    menu["Pizza"] = 299;
    menu["Popcorn"] = 80;
    menu["Cold-Drinks"] = 60;
    menu["Cold-Coffee"] = 100;
    menu["Masala-Coce"] = 500;

    // Update Query --> O(Log n)
    menu["Popcorn"] = (1 + 0.1) * menu["Popcorn"]; // Price Increases 10%.

    // Deletion in Hash Table -> O(log n)
    menu.erase("Popcorn");

    // Iterate Over the Map:
    for (pair<string, int> item : menu)
    {
        cout << item.first << " = " << item.second << endl;
    }

    return 0;
}