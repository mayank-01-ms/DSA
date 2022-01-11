/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
using namespace std;

void pypart2(int n)
{
    int i = n, j = 0, k = 0;
    while (i > 0)
    {
        while (k < (n - i))
        {
            cout << "  ";
            k++;
        }
        k = 0;
        while (j < i)
        {
            cout << "* ";
            j++;
        }
        j = 0;
        i--;
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pypart2(n);
    return 0;
}
