// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, key;
//     cin>>n;
//     int arr[n];
//     for (int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     cin>>key;
//     int i;
//     for (i=0; i<n; i++)
//     {
//         if(arr[i] == key)
//         {
//             break;
//         }
//     }
//     if(i<n)
//     {
//         for(int j=i; j<n-1; j++)
//         {
//             arr[j] = arr[j+1];
//         }
//         n--;
//     }
//     for (int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Another method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 4, 6, 3, 5};
    int key = 3;
    int n = sizeof(a)/sizeof(a[0]);
    int i;

    for (i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            n = n-1;
            for(int j=i; j<n; j++)
            {
                a[j] = a[j+1];
            }
        break;
    }
}
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;  
      
}