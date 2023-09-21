#include <iostream>
using namespace std;

int main()
{
	for (int k = 1; k <= 4; k++)
	{
		for (int c = 4 - k; c >= 1; c--)
		{
			cout << " ";
		}
		for (int i = 1; i <= 2 * k - 1; i++)
		{
			cout << "*";
		}

		cout << endl;
	}
	for (int k = 1; k <= 3; k++)
	{
		for (int i = 1;i <= k; i++)
		{
			cout << " ";
		}
		for(int c=5;c>=2*k-1;c--)
		{
			cout << "*";
		}

		cout << endl;

	}
}
