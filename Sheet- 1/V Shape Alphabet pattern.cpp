/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        for (j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        cout << char(i + 65);
        for (j = 1; j < (i * 2); j++)
            cout << " ";

        if (i >= 1)
            cout << char(i + 65);
        cout << "\n";
    }
}
int main()
{
    int n = 5;
    pattern(n);
    return 0;
}
