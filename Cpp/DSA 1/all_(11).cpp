#include <iostream>
using namespace std;
int main()
{
int x, y, n;
cin>>n;
for (x=1 ; x<=n ; x++)
{
	for (y=1 ; y<=n-x ; y++)
{
	        cout<<" ";
	    }
	    for(y=63+2*x ; y>=65 ; y--)
	    {
	           cout<<(char)(y);
	    }
	      
	    cout<<endl;
}
}