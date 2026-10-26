#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, arr[10], n, j, temp=0;
	for(i=0;i<10;i++)
	{
	    cin>>arr[i];
	}
for(i=0;i<10-1;i++)
{
    for(j=0;j<10-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(i=0;i<10;i++)
cout<<arr[i]<<" , ";
    return 0;
}
