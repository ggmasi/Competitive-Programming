// url: https://codeforces.com/contest/2266/problem/D
// Title: Falling Concrete
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n), transf(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            transf[i] = v[i]-(i+1);
        }
        
        sort(transf.rbegin(), transf.rend());
        int ans = 1;
        int atual = 1;

        for (int i = 1; i < n; i++){
            if(transf[i-1] == transf[i]) continue;
            if(transf[i-1] == transf[i]+1){
                atual++;
            }else{
                ans = max(ans, atual);
                atual = 1;
            }
        }

        
        
        ans = max(ans, atual);
        cout << ans << "\n";

    }
    
    return 0;
}