#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>m1;
    map<int,string>m2 = {{1,"ABES"},{2,"KIET"},{3,"JSS"}};
    for(auto &p:m2)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}