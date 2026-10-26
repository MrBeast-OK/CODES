#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int previous = 0, int current = 1)
{
	if (n == 0)
		return previous;

	return fibonacci(n - 1, current, previous + current);
}

int main()
{
	int n;

	cout << "Enter n: ";
	cin >> n;

	if (n < 0)
	{
		cout << "n must be non-negative." << endl;
		return 1;
	}

	cout << "The " << n << "th Fibonacci number is " << fibonacci(n) << endl;
	return 0;
}
