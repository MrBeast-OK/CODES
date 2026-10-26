#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return a * power(a, n - 1);
}

int main()
{
	int a;
	int n;

	cout << "Enter the base and exponent: ";
	cin >> a >> n;

	if (n < 0)
	{
		cout << "The exponent must be non-negative." << endl;
		return 1;
	}

	cout << a << " raised to the power " << n << " = " << power(a, n) << endl;
	return 0;
}
