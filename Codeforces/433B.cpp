// url: https://codeforces.com/contest/433/problem/B
// Title: Kuriyama Mirais Stone
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    vector<long long int> v(n), sum(n+1), ord(n+1);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        ord[i+1] = v[i];
    }
    ord[0] = 0;
    sort(ord.begin(), ord.end());
    sum[0] = 0;
    for (int i = 1; i <= n; i++){
        sum[i] = sum[i-1]+v[i-1];
        ord[i] += ord[i-1];
    }

    long long int t; cin >> t;
    while(t--){
        long long int type, l, r; cin >> type >> l >> r;
        if(type == 1){
            cout << sum[r]-sum[l-1] << "\n";
        }else{
            cout << ord[r]-ord[l-1] << "\n";
        }
    }

    return 0;
    
}