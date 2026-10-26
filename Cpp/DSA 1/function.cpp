#include <bits/stdc++.h>
using namespace std;

int power(int, int);
int main()
{
 int a,b,x;
 cin>>a>>b;
 x =power(a,b);
 cout<<x;
}
int power(int x, int y)
{
    int r=1;
    for(int c=1; c<=y; c++)
    {
        r = r*x;
    }
    return(r);
}