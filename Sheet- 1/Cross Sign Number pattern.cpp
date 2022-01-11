/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, c = 1;
    int m[5][5] = {0};
    cout << "Enter the number of rows: ";
    cin >> n;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= n; j++)
            if (j == i || (n + 1) - i == j)
                m[i - 1][j - 1] = c;
        if (i < (n - 1))
            ++c;
        else
            --c;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (m[i][j] == 0)
                cout << " ";
            else
                cout << m[i][j];
        }
        cout << "\n";
    }
    return 0;
}
