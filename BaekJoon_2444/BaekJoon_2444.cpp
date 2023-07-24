#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 1;
	for (int i = n; i > 0; i--)
	{
		for (int j = i-1; j > 0; j--)
		{
			cout << ' ';
		}
		for (int k = 0; k < count; k++)
		{
			cout << '*';
		}
		count = count + 2;
		cout << '\n';
	}
	count = count - 4;
	for (int i1 = 0; i1 < n; i1++)
	{
		for (int j1 = 0; j1 <= i1; j1++)
		{
			cout << ' ';
		}
		for (int k1 = count; k1 > 0; k1--)
		{
			cout << '*';
		}
		count = count - 2;
		cout << '\n';
	}
	return 0;
}