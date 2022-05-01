/*
    Question Link: https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        int temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (mp.find(digit) == mp.end())
                mp[digit] = 1;
            else
                ++mp[digit];
            temp = temp / 10;
        }
        int count = 0;
        for (auto it : mp)
        {
            if (it.first == 0)
                continue;
            if (n % it.first == 0)
                count += it.second;
        }
        cout << count << "\n";
    }
    return 0;
}