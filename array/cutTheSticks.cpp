#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int shortest = 1001, new_shortest=1001, count0 = 0;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        if (arr[i] < shortest)
            shortest = arr[i];
    }
    cout << n << "\n";
    while(count0 != n){
        for(int i=0; i<n; ++i){
            if (arr[i] == 0)
                continue;
            arr[i] = arr[i] - shortest;
            if(arr[i] == 0)
                ++count0;
            else if(arr[i] < new_shortest)
                new_shortest = arr[i];
        }
        if(new_shortest == 0 || (n-count0)==0)
            break;
        shortest = new_shortest;
        new_shortest = 1001;
        cout << n-count0 << "\n";
    }
    return 0;
}

