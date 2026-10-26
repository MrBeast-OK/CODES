#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int number, int reversed = 0)
{
	if (number == 0)
		return reversed;

	return reverseNumber(number / 10, reversed * 10 + number % 10);
}

int main()
{
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (number < 0)
		cout << "Reversed number = -" << reverseNumber(-number) << endl;
	else
		cout << "Reversed number = " << reverseNumber(number) << endl;

	return 0;
}