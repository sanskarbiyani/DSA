#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long int b, w, bc, wc, z, btw, wtb;
        cin >> b >> w >> bc >> wc >> z;
        if (bc == wc)
            cout << (b*bc + w*wc) << "\n";
        else {
            btw = bc + z;
            wtb = wc + z;
            
            if (bc<wc && btw<wc)
                cout << (b*bc + w*btw) << "\n";
            else if (wc<bc && wtb<bc)
                cout << (b*wtb + w*wc) << "\n";
            else
                cout << (b*bc + w*wc) << "\n";
        }
    }
    return 0;
}
