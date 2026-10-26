#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)
    {
        cout<<"Real and Distinct";
    }
    else if(d==0)
    cout<<"Real and Equal";
    else
    cout<<"Imaginary";
}


