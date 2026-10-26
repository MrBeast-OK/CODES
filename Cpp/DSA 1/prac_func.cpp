#include<bits/stdc++.h>
using namespace std;
int Prime(int n);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(Prime(n))
        cout<<n<<" is a prime number."<<endl;
    else
        cout<<n<<" is not a prime number."<<endl;
    return 0;
}
int Prime(int n)
{
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}