#include <bits/stdc++.h>
using namespace std;

int binarySearch(int numbers[], int low, int high, int target)
{
	if (low > high)
		return -1;

	int middle = (low + high) / 2;

	if (numbers[middle] == target)
		return middle;

	if (target < numbers[middle])
		return binarySearch(numbers, low, middle - 1, target);
	else
		return binarySearch(numbers, middle + 1, high, target);
}

int main()
{
	int numbers[100], n, target;

	cout << "Enter number of elements: ";
	cin >> n;

	cout << "Enter sorted elements: ";
	for (int i = 0; i < n; i++)
		cin >> numbers[i];

	cout << "Enter value to search: ";
	cin >> target;

	int position = binarySearch(numbers, 0, n - 1, target);
	if (position == -1)
		cout << "Not Found" << endl;
	else
		cout << "Found at index " << position << endl;

	return 0;
}
