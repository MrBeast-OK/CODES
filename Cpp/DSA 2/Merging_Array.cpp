#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int arr1[n1];
    for(int i = 0; i < n1; i++) 
    {
        cin >> arr1[i];
    }
    cin >> n2;

    int arr2[n2];
    for(int i = 0; i < n2; i++) 
    {
        cin >> arr2[i];
    }
    int merged[n1 + n2];
    for(int i = 0; i < n1; i++) 
    {
        merged[i] = arr1[i];
    }
    for(int j = 0; j < n2; j++) 
    {
        merged[n1 + j] = arr2[j];
    }
    sort(merged, merged + n1 + n2);
    for(int k = 0; k < n1 + n2; k++) 
    {
        cout << merged[k] << " ";
    }
    return 0;
}