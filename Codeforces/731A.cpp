// url: https://codeforces.com/contest/731/problem/A
// Title: Night At The Museum
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int res = 0;
    char atual = 'a';
    for(auto x : s){
        res += min(abs((atual-x)), 26-abs((x-atual)));
        atual = x;
    }

    cout << res << endl;
}