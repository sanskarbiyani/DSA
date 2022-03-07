#include <bits/stdc++.h>
using namespace std;

vector<int> addDays(int buy, int sell)
{
    vector<int> a = {buy, sell};
    return a;
}

vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    // code here
    int hasStock = 0, buy = -1, sell = -1;
    vector<vector<int>> days;
    for (int i = 1; i < n; ++i)
    {
        // cout << "\ni: " << i << "\tvalue: " << A[i];
        // cout << "\nBuy: " << buy << "\tSell: " << sell;
        if ((A[i] < A[i - 1] && !hasStock) || (A[i] > A[i - 1] && hasStock))
            continue;
        else if (A[i] > A[i - 1] && !hasStock)
        {
            // daysBuys.push_back(i-1);
            buy = i - 1;
            hasStock = 1;
            // cout << "\nStock buy on: " << buy;
        }
        else if (A[i] < A[i - 1] && hasStock)
        {
            // daysSell.push_back(i-1);
            sell = i - 1;
            hasStock = 0;
            // cout << "\nStock sell on: " << sell;
        }
        if (buy != -1 && sell != -1)
        {
            days.push_back(addDays(buy, sell));
            buy = -1;
            sell = -1;
        }
    }
    if (hasStock)
    {
        days.push_back(addDays(buy, n - 1));
    }
    return days;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    vector<vector<int>> arr = stockBuySell(a, n);
    cout << "\n";
    for (auto it : arr)
    {
        cout << "(" << it[0] << "," << it[1] << ") ";
    }
    cout << "\n";
}