/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, rows;
    char ch;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the Symbol for pattern: ";
    cin >> ch;
    cout << "\n";
    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < i; j++)
        {
            cout << ch;
        }
        cout << "\n";
    }
    getch();
    return 0;
}
