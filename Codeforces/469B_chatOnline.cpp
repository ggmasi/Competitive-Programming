//https://codeforces.com/contest/469/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, q, l, r; cin >> p >> q >> l >> r;
    vector<pair<int, int>> vz(p);
    vector<pair<int, int>> vx(q);
    
    for (int i = 0; i < p; i++){
        cin >> vz[i].first >> vz[i].second;
    }
    
    for (int i = 0; i < q; i++){
        cin >> vx[i].first >> vx[i].second;
    }
    int ans = 0;
    for (int i = l; i <= r; i++){
        bool a = false;
        for (auto z : vz){
            for(auto x : vx){
                if((x.first+i <= z.first && x.second+i >= z.second) || (x.first+i >= z.first && x.first+i <= z.second) || (x.second+i >= z.first && x.second+i <= z.second)){
                    a = true;
                } 
            }
        }
        if(a) ans++;
    }
    
    cout << ans << "\n";
}