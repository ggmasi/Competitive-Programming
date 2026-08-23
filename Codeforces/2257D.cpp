// url: https://codeforces.com/contest/2257/problem/D
// Title: Bermuda Rectangle
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<ll> getDivisors(ll n){
    vector<ll> res, large;
    ll num = 1;
    while(num*num <= n){
        if(n%num == 0){
            if(num == n/num){
                res.push_back(num);
            }else{
                res.push_back(num);
                large.push_back(n/num);
            }
        }
        num++;
    }
    for (int i = large.size()-1; i >= 0; i--){
        res.push_back(large[i]);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        ll s, q; cin >> s >> q;
        vector<ll> divs = getDivisors(s);
        vector<ll> prefSum(divs.size());
        prefSum[0] = divs[0]*(s/divs[0]);
        for (int i = 1; i < divs.size(); i++){
            ll largura = divs[i]-divs[i-1];
            ll altura = s/divs[i];
            
            prefSum[i] = prefSum[i-1] + altura*largura;
        }
        
        while(q--){
            ll x, y; cin >> x >> y;
            
            ll id_x = lower_bound(divs.begin(), divs.end(), x) - divs.begin();
            
            ll id_y = lower_bound(divs.begin(), divs.end(), (s + y - 1) / y) - divs.begin();

            ll ans = 0;
            
            if (id_y > id_x) {
                ans = x * y;
            } else {
                ll area = 0;
                
                if (id_y > 0) {
                    area += divs[id_y - 1] * y;
                }
                
                if (id_x - 1 >= id_y) {
                    ll val_esq = (id_y > 0) ? prefSum[id_y - 1] : 0;
                    area += prefSum[id_x - 1] - val_esq;
                }
                
                ll prev_d = (id_x > 0) ? divs[id_x - 1] : 0;
                area += (x - prev_d) * (s / divs[id_x]);
                
                ans = area;
            }
            
            cout << ans << "\n";
        }

    }
    
    return 0;
}