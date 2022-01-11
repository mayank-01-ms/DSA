/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
using namespace std;
int main()

{
    int row_size;
    cout << "Enter the row size:";
    cin >> row_size;

    for (int out = 1; out <= row_size; out++)
    {
        for (int in = 1; in <= out; in++)
            cout << "*";

        cout << "\n";
    }
}
