#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    int c[max+1]={0};
    for(int i=0; i<n; i++)
    {
        c[arr[i]]++;
    }
    for (int i=1; i<=max; i++)
    {
        c[i]=c[i] + c[i-1];      //For cumulative count 
    }
    
    int b[n];
    for (int j=n-1; j>=0; j--)
    {
        b[c[arr[j]] - 1] = arr[j];
        c[arr[j]] = c[arr[j]]-1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";  
    }
}