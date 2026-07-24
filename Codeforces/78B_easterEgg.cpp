//https://codeforces.com/contest/78/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string ans = "ROYGBIV";
    n -= 7;

    while(n >= 7){
        ans += "ROYGBIV";
        n -= 7;
    }

    while(n > 0){
        ans += ans[ans.length()-4];
        n--;
    }

    cout << ans << endl;
    
}