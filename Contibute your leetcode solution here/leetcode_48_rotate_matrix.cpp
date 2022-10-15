#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int a = 0;
    int b = n - 1;
    while (a < b)
    {
        for (int i = 0; i < (b - a); ++i)
        {
            swap(matrix[a][a + i], matrix[a + i][b]);
            swap(matrix[a][a + i], matrix[b][b - i]);
            swap(matrix[a][a + i], matrix[b - i][a]);
        }
        ++a;
        --b;
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
    for (auto i : matrix)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}