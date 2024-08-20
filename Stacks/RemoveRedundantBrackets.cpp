#include <bits/stdc++.h>
using namespace std;
bool hasRedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            bool hasOperator = false;
            while (!st.empty() && st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    hasOperator = true;
                }
                st.pop();
            }
            st.pop(); // Pop the opening bracket '('

            // If there were no operators between the brackets, they are redundant
            if (!hasOperator)
            {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s = "(a+b*(c+d))";
    cout << hasRedundantBrackets(s);
    return 0;
}