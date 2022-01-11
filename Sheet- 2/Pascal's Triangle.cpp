/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
using namespace std;

int xyz(int n, int k);
void Pascal(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
            cout << " " << xyz(line, i);
        cout << "\n";
    }
}
int xyz(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    Pascal(n);
    return 0;
}
