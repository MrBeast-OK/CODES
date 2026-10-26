#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    if (s.empty())
    {
        cout << "Stack empty." << endl;
    }
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "stack is not empty." << endl;
    cout << "Top element : " << s.top() << endl;
    s.pop();
    cout << "After one pop, top element is: " << s.top() << endl;
    s.pop();
    s.pop();
    if (s.empty())
    {
        cout << "Stack is empty again." << endl;
    }
    return 0;
}