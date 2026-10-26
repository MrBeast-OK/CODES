//Mutual Uncommon Elements
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    set<int> s1, s2;
    for (int i = 0; i < n; i++) {
        int P;
        cin >> P;
        s1.insert(P);
    }
    for (int i = 0; i < m; i++) {
        int Q;
        cin >> Q;
        s2.insert(Q);
    }
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s1, s1.begin()));
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(s2, s2.begin()));
    for (auto it : s1) {
        cout << it << " ";
    }
    for (auto it : s2) {
        cout << it << " ";
    }
    return 0;
}