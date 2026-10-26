#include <bits/stdc++.h>
using namespace std;
int sod(int n)
{
    if (n == 0)
    return (0);
    else
    return ((n%10)+sod(n/10));
}
main()
{
    int n, s;
    cin >> n;
    s=sod(n);
cout<<s;
}