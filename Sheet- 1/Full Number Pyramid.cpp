/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
using namespace std;
int main()
{
     cout << "Enter the row size:";
     int row_size, out, in1, in2;
     int np = 1;
     cin >> row_size;
     for (out = 1; out <= row_size; out++)
     {
          for (in1 = row_size - 1; in1 >= out; in1--)
          {
               cout << " ";
          }
          for (in2 = np; in2 >= 1; in2--)
          {
               cout << in2;
          }
          np += 2;
          cout << "\n";
     }
}
