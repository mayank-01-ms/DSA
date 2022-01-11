/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <bits/stdc++.h>
using namespace std;

void print_arrow(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < n - i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    print_arrow(n);
    return 0;
}
