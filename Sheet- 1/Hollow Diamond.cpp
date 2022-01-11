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
  int row_size;
  cin >> row_size;
  int in, out;
  int print_control_x = row_size / 2 + 1, x = 1;

  for (out = 1; out <= row_size; out++)
  {
    for (in = 1; in <= row_size; in++)
    {
      if (in == print_control_x || in == row_size - print_control_x + 1)
      {
        cout << x;
      }
      else
      {
        cout << " ";
      }
    }
    if (out <= row_size / 2)
    {
      print_control_x--;
      x++;
    }
    else
    {
      print_control_x++;
      x--;
    }
    cout << "\n";
  }
}
