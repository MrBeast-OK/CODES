#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    string S;
    cin.ignore();
    getline(cin,S);
    for(int x= K; x<= N-1-K; x++)
    {
        cout<<S[x];
    }
}