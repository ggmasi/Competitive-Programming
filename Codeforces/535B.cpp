// url: https://codeforces.com/contest/535/problem/B
// Title: Tavas And Saddas
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    long long ans = 0;

    for(char c : s){
        if(c == '4'){
            ans = ans*2 + 1;
        }else{
            ans = ans*2 + 2;
        }
    }

    cout << ans << "\n";
}