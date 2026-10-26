#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string S, S1=" ", S2=" ",r;
    cin>>n;
    cin.ignore();
    getline(cin,S);
    for(char a : S)
    {
        if (isalpha(a))
        {
            char ch = tolower(a);
            S1 = S1 + ch;
        }
        else if (isdigit(a))
        {
            S1 = S1 + a;
        }
        else
        {
            S2 = S2 + a;
        }
    }
    r = S1 + S2;
    cout<<r;
}