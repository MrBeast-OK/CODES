// A search algorithm that finds a target value in a sorted array by repeatedly dividing the search interval in half.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target, low, high, mid;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>target;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==target)
        {
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}

