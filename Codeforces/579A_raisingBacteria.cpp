//https://codeforces.com/contest/579/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    int ans = 1;
    while(x > 1){
        if(x%2){
            ans++;
            x--;
        }
        x/=2;
    }

    cout << ans << "\n";
}