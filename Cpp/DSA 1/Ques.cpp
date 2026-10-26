#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
    int n;
    float sum = 0;
    cin>> n;
    for(int x=1; x<=n; x++)
    {
        sum = sum + pow(2*x, x+2)/tgamma(x+3);
    }
    cout<<sum;
}