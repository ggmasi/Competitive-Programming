//https://codeforces.com/contest/550/problem/B
// Preparing Olympiad
#include <bits/stdc++.h>
using namespace std;

long long int n, l, r, x;
vector<long long int> v;

long long int solve(int idx, long long int sum, int tam, int first){
    long long int ans = 0;
    if(tam == 1){
        for (int i = idx+1; i < n; i++){
            ans += solve(i, sum+v[i], tam+1, first);
        }
    }else{
        if(sum > r) return ans;
        if(sum >= l && v[idx]-first >= x){
            ans++;
            // cout << first << " " << v[idx] << " " << sum << "\n";
        } 
        for (int i = idx+1; i < n; i++){
            ans += solve(i, sum+v[i], tam+1, first);
        }
    }

    
    return ans;

}

int main(){
    cin >> n >> l >> r >> x;

    v.resize(n);
    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    long long int ans = 0;

    for (int i = 0; i < n; i++){
        ans += solve(i, v[i], 1, v[i]);
    }
    
    cout << ans << "\n";
    
}