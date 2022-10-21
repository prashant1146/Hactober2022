#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;
            char c = st.top();
            st.pop();
            if (!(s[i] == ')' && c == '('))
                return false;
        }
    }
    if (st.empty())
        return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}