#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> asciia(26); // for storing the ASCII values of lower case alphabets
vector<ll> asciiA(26); // for storing the ASCII values of upper case alphabets
void solve()
{
    string W;
    cin >> W;
    int n;
    cin >> n;
    char X[n];
    vector<int> B(n), ans(3, 0); // first part stores maximum sum, second left index of the answer substring and third right index of the answer substring
    int N = W.size();
    for (int i = 0; i < n; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
        if (isupper(X[i]))
        {
            asciiA[X[i] - 65] = B[i];
        }
        else
        {
            asciia[X[i] - 97] = B[i];
        }
    }
    for (int i = 1; i <= N; i++) // traversing all possible lengths of substrings
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            if (isupper(W[j]))
                sum = sum + asciiA[W[j] - 65];
            else
                sum = sum + asciia[W[j] - 97];
        }
        if (sum >= ans[0])
        {
            ans[0] = sum;
            ans[1] = 0;
            ans[2] = i - 1;
        }
        for (int k = i; k <= N; k++) // sliding window approach for optimisation
        {
            if (isupper(W[k]))
                sum = sum + asciiA[W[k] - 65];

            else
                sum = sum + asciia[W[k] - 97];
            if (isupper(W[k - i]))
                sum = sum - asciiA[W[k - i] - 65];

            else
                sum = sum - asciia[W[k - i] - 97];
            if (sum >= ans[0])
            {
                ans[0] = sum;
                ans[1] = k - i + 1;
                ans[2] = k;
            }
        }
    }
    for (int i = ans[1]; i <= ans[2]; i++)
    {
        cout << W[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 26; i++)
    {
        asciia[i] = i + 97;
    }
    for (int i = 0; i < 26; i++)
    {
        asciiA[i] = i + 65;
    }
    solve();
    return 0;
}