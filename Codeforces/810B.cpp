// url: https://codeforces.com/contest/810/problem/B
// Title: Summer Sell Off
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, f; cin >> n >> f;
    vector<int> diff(n);
    long long int ans = 0;
    for (int i = 0; i < n; i++){
        int k, l; cin >> k >> l;
        if(k >= l){
            ans += l;
            diff[i] = 0;
        }else{
            ans += k;
            diff[i] = 2*k >= l ? l-k : k;
        }
    }

    sort(diff.rbegin(), diff.rend());

    for (int i = 0; i < f; i++){
        ans += diff[i];
    }

    cout << ans << "\n";
    return 0;
    
}