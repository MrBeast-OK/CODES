#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char s, char t, char d)
{
	if (n == 0)
	{
		return;
	}
	TOH(n - 1, s, d, t);
    cout << "Move disk " << n << " from " << s << " to " << d << endl;
	TOH(n - 1, t, s, d);
}

int main(){
	int n = 3;
	TOH(n, 'A', 'B', 'C');
    cout << "Total moves: " << (pow(2, n) - 1) << endl;
	return 0;
}