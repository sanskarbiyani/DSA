#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, m, d, s, count = 1;
    cin >> p >> d >> m >> s;
    if (s<p){
        cout << 0 << "\n";
    }
    else {
        s-= p;
        p -= d;
        // cout << "Money after 1st purchase: " << s << "\n";
        while(s>0 && s>=p && p>=m){
            ++count;
            s -= p;
            p -= d;
        // cout << "Money and Price: " << s << " " << p << "\n";
        }
        if(p<m)
        p = m;
        while(s>=0 && s>=p){
            ++count;
            s -= p;
        // cout << "Money: " << s << "\n";
        }
        cout << count << "\n";
    }
    return 0;
}
