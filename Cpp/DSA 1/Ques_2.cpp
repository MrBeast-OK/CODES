#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*factorial(n-1);
}
long long power(int a, int b)
{
    if(b==0)
        return 1;
    return a*power(a, b-1);
}
int main() {
    int n;
    float sum = 0;
    cin>> n;
    for(int x=1; x<=n; x++)
    {
        sum = sum + power(2*x,x+2)/(float)factorial(x+2);
    }
    cout<<sum;
}