//https://codeforces.com/contest/584/problem/B
// Kolya And Tanya
#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int MOD = 1e9+7;
    int n; cin >> n;
    unsigned long long int mult = 1;
    for (int i = 0; i < 3*n; i++){
        mult *= 3;
        mult %= MOD;
    }
    unsigned long long int diff = 1;
    for (int i = 0; i < n; i++){
        diff *= 7;
        diff %= MOD;
    }
    
    long long int ans = (mult-diff+MOD)%MOD;
    cout << ans << "\n";
    
    
}