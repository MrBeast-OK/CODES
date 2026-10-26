#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int calculate(int a, int b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
    }
    return 0;
}

int main()
{
    string infix, postfix = "";
    stack<char> st;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    for(int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if(isdigit(ch))
        {
            postfix += ch;
        }
        else if(ch == '(')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && precedence(st.top()) >= precedence(ch))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix Expression: " << postfix << endl;
    stack<int> s;

    for(int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];
        if(isdigit(ch))
        {
            s.push(ch - '0');
        }
        else
        {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            int result = calculate(a, b, ch);
            s.push(result);
        }
    }
    cout << "Evaluated Result: " << s.top() << endl;
    return 0;
}