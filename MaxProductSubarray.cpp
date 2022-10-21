#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isOverlap(int minS, int maxE, vector<int> interval)
{
    if (minS > interval[1] || maxE < interval[0])
    {
        return false;
    }

    return true;
}

int maxProduct(vector<int> nums)
{
    if (nums.size() == 0)
        return 0;

    int result = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        int accu = 1;
        for (int j = i; j < nums.size(); j++)
        {
            accu *= nums[j];
            result = max(result, accu);
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << maxProduct(a) << endl;
    }
    return 0;
}