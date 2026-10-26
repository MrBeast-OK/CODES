// Traversing an array is a method of visiting each element of the array at least once to perform some operation on it.
// The most common way to traverse an array is by using a loop, such as a for loop or a while loop.


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)    
    {
        cin >> a[i];                // Input the elements of the array
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";        // Output the elements of the array
    }
    return 0;
}