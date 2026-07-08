//https://codeforces.com/gym/106598/problem/M
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    long long int p, q; cin >> p >> q;
    long long int slen = s.size(), tlen = t.size();
    
    if(p == 0 || q == 0){
        cout << "=\n";
        return 0;
    }

    string a = s+t, b = t+s;

    if(a == b){
        cout << "=\n";
    }else if(a < b){
        cout << "<\n";
    }else{
        cout << ">\n";
    }


}