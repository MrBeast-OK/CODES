#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int element;
    cin>>element;

    a[n-1]=element;

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}