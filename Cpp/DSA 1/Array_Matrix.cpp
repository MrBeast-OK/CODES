#include <iostream>
using namespace std;
int main()
{
    int A[4][3], B[3][4], C[4][4], x , y , z;
    for (x=0 ; x<4 ; x++)
    {
        for (y=0 ; y<3 ; y++)
    {
        cin>>A[x][y];    
    }
    }
    for (x=0 ; x<3 ; x++)
    {
        for (y=0 ; y<4 ; y++)
        {
            cin>>B[x][y];
        }
    } 
    for (x=0 ; x<4 ; x++)
    {
        for (y=0 ; y<4 ; y++)
        {
            C[x][y] = 0;
            for (z=0 ; z<3 ; z++)
            C[x][y] = C[x][y] + A[x][y] + B[x][y] ;
        }
        cout<<C[x][y]<<" ";
    }
    cout<<endl;
    
    return 0;
}