#include <bits/stdc++.h>
using namespace std;

void incrementDegree(int v, vector<int> &deg, int &gt2Deg)
{
    if (deg[v] == 1)
        ++gt2Deg;
    ++deg[v];
}

int main()
{
    int n;
    cin >> n;
    vector<int> deg(n + 1, 0);
    int gt2Deg = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        incrementDegree(u, deg, gt2Deg);
        incrementDegree(v, deg, gt2Deg);
    }
    // cout << "Number of Vertex with degree >=2: " << gt2Deg << "\n";
    // cout << "Degree of vertices are: ";
    // for(auto it: deg)
    //     cout << it << " ";
    // cout << "\n";
    cout << (2 + (2 * (gt2Deg - 1)));
    cout << "\n";
}