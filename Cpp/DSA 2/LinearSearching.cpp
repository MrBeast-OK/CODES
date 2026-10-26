// It is a method of searching an element in a list by checking each element one by one until the desired element is found or the list ends.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, key, flag = 0, pos;
    cin >> n;
    int a[n];
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key to be searched: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            pos = i + 1;
        }
}
if (flag == 1)
{
    cout << "Element found at position: " << pos << endl;
}
else
{
    cout << "Element not found in the array." << endl;
}
return 0;
}