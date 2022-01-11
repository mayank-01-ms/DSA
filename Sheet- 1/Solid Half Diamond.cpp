/* 
NAME: Mayank Singh
URN: 1961103
(GEHU Bhimtal)
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int out, in;
	cout << "Enter the row size:";
	int row_size;
	cin >> row_size;
	for (out = row_size; out >= -row_size; out--)
	{
		for (in = row_size; in >= abs(out); in--)
		{
			cout << in;
		}
		cout << "\n";
	}
}
