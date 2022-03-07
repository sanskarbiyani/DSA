#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the largest number after k swaps.
    string maxStr;
    bool isSafe(string str)
    {
        if (str > maxStr)
            return true;
        else
            return false;
    }

    string findMaximumNum(string str, int k)
    {
        // code here.
        maxStr = str;
        doSwaps(str, k, 0);
        return maxStr;
    }

    void doSwaps(string str, int k, int l)
    {
        if (k == 0)
            return;
        // Finding the max Element
        char maxC = str[l];
        for (int i = l + 1; i < str.length(); ++i)
        {
            if (maxC < str[i])
                maxC = str[i];
        }

        // Found the minium element, decrement k
        if (maxC != str[l])
            k--;

        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == maxC)
            {
                swap(str[i], str[l]);
                if (isSafe(str))
                {
                    maxStr = max(maxStr, str);
                }
                doSwaps(str, k, l + 1);
                swap(str[i], str[l]);
            }
        }
    }
};

int main()
{
    int k;
    string s;
    cin >> k >> s;
    Solution obj;
    cout << obj.findMaximumNum(s, k) << "\n";
    return 0;
}