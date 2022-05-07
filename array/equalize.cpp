#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    
    unordered_map<int, int> mp;
    for(auto it: arr){
        if(mp.find(it) == mp.end())
            mp[it] = 1;
        else
            ++mp[it];
    }
    
    int largest = -1, sum=0;
    for(auto it:mp){
        if (largest < it.second){
            if (largest != -1)
                sum += largest;
            largest = it.second;
        }
        else
            sum += it.second;
    }
    cout << sum;
    return 0;
}

