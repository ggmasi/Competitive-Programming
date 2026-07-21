//https://codeforces.com/contest/492/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Disc{
    ll nota;
    ll trab;
};

bool compare(Disc a, Disc b){
    if(a.trab != b.trab){
        return a.trab < b.trab;
    }
    return a.nota < b.nota;
}

int main(){
    ll n, r, avg; cin >> n >> r >> avg;
    ll target = avg*n;
    ll sum = 0;
    vector<Disc> v(n);
    for (ll i = 0; i < n; i++){
        cin >> v[i].nota >> v[i].trab;
        sum += v[i].nota;
    }
    ll ans = 0;
    if(sum < target){
        sort(v.begin(), v.end(), compare);
    }
    ll idx = 0;
    while(sum < target){
        ll maxTrab = r-v[idx].nota;
        if(maxTrab+sum <= target){
            ans += v[idx].trab*maxTrab;
            sum += maxTrab;
            idx++;
            continue;
        }else{
            ans += v[idx].trab*(target-sum);
            sum = target;
        }       
    }
    
    cout << ans << endl;

}