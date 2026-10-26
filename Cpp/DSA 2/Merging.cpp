#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2, int merged[]) 
{
    int i=0, j=0, k=0;
    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }
    sort(merged, merged+n1+n2);
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int merged[n1+n2];
    
    merge(arr1, arr2, n1, n2, merged);
    for (int i=0; i < n1+n2; i++)
    {
        cout << merged[i] << " ";
    }
    return 0;
}