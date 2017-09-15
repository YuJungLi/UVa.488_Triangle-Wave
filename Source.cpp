#include <iostream>
#include <iomanip>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n)
	{
		int a, f;
		cin >> a >> f;
		for (int i = 0; i < f; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				for (int k = 0; k < j; k++)
					cout << j;
				cout << endl;
			}
			for (int j = a - 1; j >= 1; j--)
			{
				for (int k = 0; k < j; k++)
					cout << j;
				cout << endl;
			}
			if (i == f - 1)
				n--;
			if (n != 0)
				cout << endl;
		}
	}
	return 0;
}
