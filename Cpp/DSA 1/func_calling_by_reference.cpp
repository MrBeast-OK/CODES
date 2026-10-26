#include <bits/stdc++.h>
using namespace std;
float ABC(float);
int main() {
    float A,P;
    float r;
    cin>>r;
    A = ABC(r);
    P = ABC(r);
    cout<<A<<endl<<P<<endl;
}
float ABC(float x)
{
    float A, P;
    A = 3.14*x*x;
    P = 2*3.14*x;
    return(A);
    return(P);
}