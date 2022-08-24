/*************************************************************************************************************************
 *	* Patterns :
 **************************************************************************************************************************/
/* Question-1:
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
/* Question-2:
 1 1 1
 2 2 2
 3 3 3
*/
/* Question-3:
1 2 3
4 5 6
7 8 9
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // Question-1:
    for (int i = 0; i < n; i++){
        for (int i = 0; i < n; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Question -2 :
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // Question - 3:
    n = 3;
    for(int i=0;i<n;i++){
        static int num = 1;
        for(int j = 0; j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}