#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    stack<char> st;
    for (char c : s) {
        st.push(c);
    }
    string rev = "";
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }
    if (s == rev) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}