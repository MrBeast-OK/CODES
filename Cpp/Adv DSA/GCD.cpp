#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return abs(a);

	return gcd(b, a % b);
}

int main()
{
	int a, b;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	if (a == 0 && b == 0)
	{
		cout << "GCD is undefined for two zeros." << endl;
		return 1;
	}

	cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
	return 0;
}
