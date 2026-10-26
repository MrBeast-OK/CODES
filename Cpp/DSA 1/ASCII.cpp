#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int K,N,M, count=0;
    cin>>K>>N>>M;
    string S;
    cin.ignore();
    getline(cin,S);
    
    for (int x=0; x<K; x++)
    {
        if((int)S[x]>=N && (int)S[x]<=M)
    {
    count++;
}
}
cout<<count;
}