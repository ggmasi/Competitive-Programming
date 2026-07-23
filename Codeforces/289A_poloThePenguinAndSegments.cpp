//https://codeforces.com/contest/289/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int tam = 0;
    
    while(n--){
        int l, r; cin >> l >> r;

        tam += r-l+1;
    }

    int ans = tam%k == 0 ? 0 : k-(tam%k);

    cout << ans << "\n";
    return 0;
}