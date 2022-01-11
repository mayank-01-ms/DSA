/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
using namespace std;
int main()
{
    int out, in, a = 0, b = 1, c = a + b;
    cout << "Enter the row size :";
    int row_size;
    cin >> row_size;
    for (out = 1; out <= row_size; out++)
    {
        for (in = 1; in <= out; in++)
        {
            cout << c << " ";

            c = a + b;
            a = b;
            b = c;
        }
        cout << "\n";
    }
}
