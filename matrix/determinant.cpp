#include <bits/stdc++.h>
using namespace std;
// Gives segmentation error
// Define cofactor matrix properly

void getCofactor(vector<vector<int>> matrix, vector<vector<int>> &cofactor, int p, int q, int n)
{
    for (int row = 0; row < n; ++row)
    {
        vector<int> part;
        for (int col = 0; col < n; ++col)
        {
            if (row != p && col != q)
                part.push_back(matrix[row][col]);
        }
        if (part.size() > 0)
            cofactor.push_back(part);
        part.clear();
    }
    cout << "Cofactor: \n";
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
            cout << cofactor[i][j] << " ";
    }
    cout << endl;
}
int determinantOfMatrix(vector<vector<int>> matrix, int n)
{
    // code here
    int res = 0, sign = 1;
    if (n == 1)
        return matrix[0][0];
    if (n == 2)
        return (matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1]);

    vector<vector<int>> cofactor;
    for (int f = 0; f < n; ++f)
    {
        getCofactor(matrix, cofactor, 0, f, n);
        res += sign * matrix[0][f] * determinantOfMatrix(cofactor, n - 1);
        sign = -sign;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    vector<vector<int>> mat(n);
    cout << "Enter values: \n";
    for (int i = 0; i < n; ++i)
    {
        mat[i].assign(n, 0);
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    cout << determinantOfMatrix(mat, n);
}