#include <bits/stdc++.h>
using namespace std;

// Here instead of using Vectors.. it is much easier to use hash table.
// Rest all the logic remains same

// void booleanMatrix(vector<vector<int>> &matrix)
// {
//     // code here
//     int r = matrix.size();
//     int c = matrix[0].size();
//     vector<int> row, col;
//     for (int i = 0; i < r; ++i)
//     {
//         for (int j = 0; j < c; ++j)
//         {
//             if (matrix[i][j] == 1)
//             {
//                 row.push_back(i);
//                 col.push_back(j);
//                 int k;
//                 for (k = col.size() - 2; k >= 0; --k)
//                 {
//                     if (col[k] < matrix[i][j])
//                     {
//                         col[k + 1] = col[k];
//                     }
//                 }
//                 if (k <= 0)
//                     col[0] == matrix[i][j];
//                 else
//                     col[k] == matrix[i][j];
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     int rptr = 0, cptr = 0;
//     cout << "Row: ";
//     for (auto it : row)
//         cout << it << " ";

//     cout << "\nColumns: ";
//     for (auto it : col)
//         cout << it << " ";
//     cout << "\n";
//     for (int i = 0; i < r; ++i)
//     {
//         bool flag = false;
//         for (int j = 0; j < c; ++j)
//         {
//             if ((rptr < row.size() && i == row[rptr]) || (cptr < col.size() && j == col[cptr]))
//             {
//                 matrix[i][j] = 1;
//                 ++cptr;
//                 flag = true;
//             }
//         }
//         if (flag)
//         {
//             ++rptr;
//             cptr = 0;
//         }
//     }
// }

void booleanMatrix(vector<vector<int>> &matrix)
{
    // code here
    int n = matrix.size();
    int m = matrix[0].size();
    int row[n] = {0};
    int col[n] = {0};

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (matrix[i][j] == 1)
            {
                row[i] = 1;
                col[j] = 1;
            }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (row[i] == 1)
                matrix[i][j] = 1;
            if (col[j] == 1)
                matrix[i][j] = 1;
        }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; ++i)
    {
        arr[i].assign(m, 0);
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];
    }
    booleanMatrix(arr);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << arr[i][j] << " ";
    }
    cout << "\n";
}