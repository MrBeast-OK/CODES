#include<bits/stdc++.h>
using namespace std;
void swap(int *, int *);
main()
{
    int a,b;
    a = 10;
    b = 20;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    swap(&a, &b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
}
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
    cout<<"a = "<<*x<<" b = "<<*y<<endl;
}