#include <bits/stdc++.h>
using namespace std;

main()
{
    int *x, a = 10;
    char *y, b = 'A'; 
    float *z, c = 3.14;
    x = &a;
    y = &b;
    z = &c;
    cout<<x<<endl<<y<<endl<<z<<endl;
    x = x+10;
    y = y+10;
    z = z+10;
    cout<<(int)x<<endl<<y<<endl<<z<<endl;
    cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c)<<endl;
}