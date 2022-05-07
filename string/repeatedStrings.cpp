#include <bits/stdc++.h>
using namespace std;

int findLessSmallest(vector<int> arr, int num){
    if(arr.size() == 0)
        return 0;
    if (num==0)
        return 0;
    if(arr[arr.size()-1]<=num){
        // cout << arr[arr.size()-1] << "\n";
        return arr.size();
    }
    int start=0, end=arr.size()-1, middle;
    while(start<=end){
        middle = (start + end)/2;
        if(arr[middle] == num)
            return middle+1;
        else if (arr[middle]>num && middle-1>=0 && arr[middle-1]<=num)
            return middle;
        else if (arr[middle]<num && middle+1<arr.size() && arr[middle+1]>num)
            return middle+1;
        else if (arr[middle]<num)
            start = middle + 1;
        else
            end = middle - 1;
    }
    return 0;
}

int main(){
    int length, count=0, rem;
    string s;
    cin >> s;
    length = s.length();
    long int n, totalCount = 0;
    cin >> n;
    // cout << n << "\n";
    vector<int> occ;
    count = 0;
    for(int i=0; i<length; ++i)
        if (s[i] == 'a'){
            ++count;
            occ.push_back(i+1);
        }
    // cout << count << "\n";
    totalCount = count * (n/length);
    // cout << totalCount << "\n";
    rem = n%length;
    // cout << rem << "\n";
    totalCount += findLessSmallest(occ, rem);
    cout << totalCount;
    return 0;
}

