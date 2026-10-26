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
    
    string Z = S.substr(N-K, K) + S.substr(0, N-K);
    cout<<Z;
}