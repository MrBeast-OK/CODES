#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    
    for (int i = m; i <= n; i++)
    {
        int original = i, reversed = 0;
        
        while (original > 0)
        {
            reversed = reversed * 10 + original % 10;
            original /= 10;
        }
        
        if (reversed == i)
            cout << i << " ";
    }
    
    cout << endl;
    return 0;
}