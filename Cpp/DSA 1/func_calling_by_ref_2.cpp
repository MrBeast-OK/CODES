#include <bits/stdc++.h>
using namespace std;
void ABC(float, float *, float *);
main() {
    float A, P;
    float r;
    cin>>r;
    ABC(r, &A, &P);
    cout<<A<<endl<<P;
}
void ABC(float x, float *y, float *z)
{
    *y = 3.14*x*x;
    *z = 2*3.14*x;
}