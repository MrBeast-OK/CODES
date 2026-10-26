#include <iostream>
using namespace std;
int main()
{
    int p,r,t,x;
    cout<<"Enter Amount :";
    cin>>p;
    cout<<"Enter Rate Of Interest :";
    cin>>r;
    cout<<"Enter Time Period :";
    cin>>t;
    x = (p*r*t)/100;
    cout<<"SI :"<<x;
    return 0;
}
