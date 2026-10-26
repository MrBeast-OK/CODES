// C++ program to count the number of duplicates in an array using Binary Search
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1, 2,2,2,2, 3, 4,4, 5, 6 ,7};
    int n=sizeof(a)/sizeof(a[0]);
        int x=2;
    int count=0;
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (a[mid]==x)
        {
            count++;
            int i=mid-1;
            while (i>=0 && a[i]==x)
            {
                count++;
                i--;
            }
            i=mid+1;
            while (i<n && a[i]==x)
            {
                count++;
                i++;
            }
            break;

        }
    }
    {
        cout<<count<<endl;
    }
    return 0;
}