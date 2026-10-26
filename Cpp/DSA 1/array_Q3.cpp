#include <iostream>
using namespace std;
int main()
{
    int arr[5], max, min;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++)
    {   
        if(i==0)
        {
            max = arr[i];
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max =  arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Maximum element: "<<max<<endl;
    cout<<"Minimum element: "<<min<<endl;
    return 0;
}