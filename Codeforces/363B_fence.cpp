//https://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<long long int> v(n+1);
    v[0] = 0;
    int ans = -1;
    long long int sum = INT64_MAX;
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        if(i == 0) continue;
        v[i] += v[i-1];
        if(i < k) continue;
        if(v[i]-v[i-k] < sum){
            sum = v[i]-v[i-k];
            ans = i-k+1;
        }
    }

    cout << ans << "\n";
    
}