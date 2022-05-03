/**
 * @file appendAndDelete.cpp
 * @author Sanskar Biyani
 * @brief Question: https://www.hackerrank.com/challenges/append-and-delete/problem
 * @version 0.1
 * @date 2022-05-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     string s, t;
//     int removed = 0, k, added = 0;
//     cin >> s >> t >> k;
//     int len_s = s.length();
//     int len_t = t.length();
//     int i = 0;
//     //  All the characters after the first non-matching characters need to be removed
//     //  so that that non-matching character can be removed.
//     while (i < len_s && i < len_t)
//     {
//         if (s[i] != t[i])
//             break;
//         ++i;
//     }

//     //  There are additional characters if 't' string that has to be added.
//     if (i == len_s && i < len_t)
//         added += len_t - i;
//     // There are additional characters in 's' string that has to be removed.
//     else if (i == len_t && i < len_s)
//         removed += len_s - i;
//     else
//     {
//         added += len_t - i;
//         removed += len_s - i;
//     }

//     int totalOp = added + removed;
//     cout << "Added: " << added << "\n";
//     cout << "Removed: " << removed << "\n";
//     if ((k == totalOp) || (k >= (len_s + len_t)) || (k % 2 == 0 && k >= totalOp && totalOp % 2 == 0) || (k - totalOp) % 2 == 0)
//         cout << "Yes";
//     else if (s == t && (k >= (2 * len_s) || k % 2 == 0))
//         cout << "Yes";
//     else
//         cout << "No";

//     // Finding the number of time operation 2 is performed.

//     return 0;
// }

int main()
{
    int count, i;
    string s, t;
    int k;
    cin >> s >> t >> k;
    for (i = 0; i < s.length(); i++)
        if (s[i] != t[i])
            break;
    int n1 = s.size(), n2 = t.size();
    count = n1 - i + n2 - i;

    if (k == count || k >= n1 + n2)
        cout << "Yes";
    else if (count % 2 == k % 2 && count <= k)
        cout << "Yes";
    else
        cout << "No";
}