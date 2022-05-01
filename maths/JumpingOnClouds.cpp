#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b){
    return b==0? a : hcf(b, a%b);
}

int main(){
    int n, k;
    cin >> n >> k;
    int c[n];
    for(int i=0; i<n; ++i)
        cin >> c[i];
    
    int energy = 100;
    for(int i=k; i!=0 && n!=k; i=(i+k)%n){
        // cout << i << "\n";
        if(c[i] == 1)
            energy -= 3;
        else
            energy -= 1;
    }
    if (c[0] == 1)
        energy -= 3;
    else
        energy -= 1;
    cout << energy;
    return 0;
}