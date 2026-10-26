#include <iostream>
using namespace std;

int main() {
	int z = 1;
	for(int i = 1; i <= 4; i++)
	{
		for(int j = 1; j <= 4 - i; j++)
			cout << " ";
		
		for(int j = 1; j <= 2*i - 1; j++)
		{
			cout << (z == 1 ? "A" : "B");
			z = (z == 1) ? 2 : 1;
		}
		cout << endl;
	}
	return 0;
}