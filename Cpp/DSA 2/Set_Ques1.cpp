// Count Common:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of first set: ";
    cin >> n;
    cout << "Enter the size of second set: ";
    cin >> m;
    set<char> s1, s2;
    cout << "Enter elements of first set: ";
    for (int i = 0; i < n; i++) {
        char element;
        cin >> element;
        s1.insert(element);
    }
    cout << "Enter elements of second set: ";
    for (int i = 0; i < m; i++) {
        char element;
        cin >> element;
        s2.insert(element);
    }
    int common_count = 0;
    for (char element : s1) {
        if (s2.find(element) != s2.end()) {
            common_count++;
        }
    }
    cout << "Number of common elements: " << common_count << endl;
    return 0;
}