#include <iostream>
using namespace std;

bool issubstring(string s1, string s2)
{
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == s1[0])
        {
            int j = 0, k = i;
            while (i < s2.size() && j < s1.size() && s1[j] == s2[k])
            {
                k++;
                j++;
            }
            if (j == s1.size())
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    cout << "Enter Two Strings to compare first string is substring of second string or not\n";
    string s1, s2;
    cin >> s1 >> s2;
    if (issubstring(s1, s2))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}