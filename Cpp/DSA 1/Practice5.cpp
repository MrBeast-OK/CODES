#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,n;
    cin>>a>>b>>c>>d>>e;
    n=(a+b+c+d+e)/5;
    if (100>n && n>=90)
    {
        cout<<"A+";
    }
    else if(90>n && n>=75)
    cout<<"A";
    else if(75>n && n>=60)
    cout<<"B";
    else if(60>n && n>=40)
    cout<<"C";
    else
    cout<<"Fail";
}
