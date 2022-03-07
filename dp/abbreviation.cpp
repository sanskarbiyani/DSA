#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

bool find_same(string a, string b, int i, int j)
{
    int n1 = a.length();
    int n2 = b.length();
    if (n2 == j)
    {
        for (; i < n1; ++i)
        {
            if (isupper(a[i]))
                return false;
        }
        return true;
    }
    if (i > n1)
        return false;

    if (a[i] == b[i])
        return find_same(a, b, i + 1, j + 1);
    else if (isupper(a[i]))
        return false;
    else
    {
        bool val1 = find_same(a, b, i + 1, j); // Skipping/ Deleting the values
        a[i] = toupper(a[i]);
        bool val2 = find_same(a, b, i, j);
        return (val1 || val2);
    }
}

string abbreviation(string a, string b)
{
    // int n1 = a.length();
    // int n2 = b.length();
    // if (n1 < n2)
    //     return "NO";
    // int i = 0, j = 0;
    // while (i < n1 && j < n2)
    // {
    //     cout << "Comparing " << a[i] << " & " << b[j] << "\n";
    //     if (tolower(a[i]) == tolower(b[j]))
    //     {
    //         ++j;
    //         ++i;
    //     }
    //     else if (isupper(a[i]))
    //         return "NO";
    //     else
    //         ++i;
    // }
    // cout << "\nOne String Completed Testing...";
    // if (i == n1 && j != n2)
    //     return "NO";
    // else
    // {
    //     cout << "Remaining.\n";
    //     for (; i < n1; ++i)
    //     {
    //         if (isupper(a[i]))
    //             return "NO";
    //     }
    //     return "YES";
    // }
    if (find_same(a, b, 0, 0))
        return "YES";
    else
        return "NO";
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string a, b;
        cin >> a;
        cin >> b;
        cout << abbreviation(a, b) << "\n";
    }
    return 0;
}
