// url: https://codeforces.com/contest/102/problem/B
// Title: Sum Of Digits
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int ans = 0;

    while(s.length() > 1){
        int aux = 0;
        for(auto x : s){
            aux += x-'0';
        }

        s = to_string(aux);
        ans++;
    }

    cout << ans << "\n";
}