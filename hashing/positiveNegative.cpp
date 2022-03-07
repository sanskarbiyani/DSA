#include <bits/stdc++.h>
using namespace std;

vector<int> findPairs(int arr[], int n)
{
    // code here
    vector<int> res;
    unordered_set<int> s;
    for (int i = 0; i < n; ++i)
    {
        if (s.find(-1 * arr[i]) != s.end())
        {
            if (arr[i] < 0)
            {
                res.push_back(arr[i]);
                res.push_back(-arr[i]);
            }
            else
            {
                res.push_back(-arr[i]);
                res.push_back(arr[i]);
            }
            s.erase(-1 * arr[i]);
        }
        else
            s.insert(arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    vector<int> res = findPairs(arr, n);
    for (auto it : res)
        cout << it << " ";
    cout << "\n";
}