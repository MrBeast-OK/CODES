#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=13;
    b=6;
    c=a&b;
    cout<<c;
    return 0;
}

//output: 4
//Explanation: In binary, 13 is represented as 1101 and 6 as 0110.
//When we perform the bitwise AND operation:    