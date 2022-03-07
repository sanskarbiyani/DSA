#include <bits/stdc++.h>
using namespace std;

string strings[9] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> helper(int a[], string curr, int n, int i)
{
    vector<string> arr;
    if (i == n)
    {
        arr.push_back(curr);
        return arr;
    }
    for (int j = 0; j < strings[a[i] - 1].length(); ++j)
    {
        string new_curr = curr + strings[a[i] - 1][j];
        vector<string> result = helper(a, new_curr, n, i + 1);
        arr.insert(arr.end(), result.begin(), result.end());
    }
    return arr;
}
vector<string> possibleWords(int a[], int N)
{
    // Your code here
    return helper(a, "", N, 0);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<string> ret_arr = possibleWords(a, n);
    for (auto str : ret_arr)
    {
        cout << str << " ";
    }
    cout << "\n";
    return 0;
}