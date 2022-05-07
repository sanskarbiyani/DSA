// Problem Statement: https://www.hackerrank.com/challenges/kaprekar-numbers/problem?h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, q;
    bool present = false;
    cin >> p >> q;
    // long long num=p, square;
    for(long long num = p; num<=q; ++num){
        long long square = num*num;
        string stringNum = to_string(num);
        string stringSquare = to_string(square);
        int length = stringNum.length();
	int lengthSquare = stringSquare.length();
	string l,r;
	if (lengthSquare%2==0){
            l = stringSquare.substr(0, length);
            r = stringSquare.substr(length, stringSquare.length());
	}
	else{
	    l = stringSquare.substr(0, length-1);
            r = stringSquare.substr(length-1, stringSquare.length());
	}
	// cout << "l: " << l << "\n";
	// cout << "r: " << r << "\n";
	int sum = stoi(r);
	if (l.length())
	    sum += stoi(l);
        if(sum == num){
            cout << num << " ";
            present = true;
        }
        if(!present)
            cout << "INVALID RANGE";
    }
    cout << "\n";
    return 0;
}

