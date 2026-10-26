#include <bits/stdc++.h>
using namespace std;

int main() {
    int stack[5];
    int top = -1;

    if (top == -1)
        cout << "Stack is Empty\n";

    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    cout << "\nAfter Push:\n";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";

    cout << "\n\nTop element: " << stack[top] << endl;

    cout << "\nPopped element: " << stack[top] << endl;
    top--;

    cout << "\nAfter Pop:\n";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";

    if (top == 4)
        cout << "\n\nStack is Full";
    else
        cout << "\n\nStack is Not Full";

    if (top == -1)
        cout << "\nStack is Empty";
    else
        cout << "\nStack is Not Empty";

    return 0;
}