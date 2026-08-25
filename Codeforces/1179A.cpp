// url: https://codeforces.com/problemset/problem/1179/A
// Title: Valeriy and Deque
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, q; cin >> n >> q;

    deque<ll> v;
    ll maior = -1;
    int idxMaior = -1;
    for (int i = 0; i < n; i++){
        ll temp; cin >> temp;
        v.push_back(temp);
        if(temp > maior){
            maior = temp;
            idxMaior = i;
        }
    }

    vector<pii> memo(idxMaior+1, {-1, -1});
    ll ind = 1;
    while(v.front() != maior){
        memo[ind].first = v[0];
        memo[ind].second = v[1];
        ll a = v.front();
        v.pop_front();
        ll b = v.front();
        v.pop_front();

        if(a > b){
            v.push_front(a);
            v.push_back(b);
        }else{
            v.push_front(b);
            v.push_back(a);
        }

        ind++;
    }
    // cout << ind << endl;
    map<ll, ll> mp;
    for (int i = 1; i < n-1; i++){
        mp[i] = v[i];
    }
    mp[0] = v[n-1];
    

    
    while(q--){
        ll m; cin >> m;

        if(m < ind){
            cout << memo[m].first << " " << memo[m].second << "\n";
        }else{
            ll idx = (m-(ind-1))%(n-1);
            cout << v[0] << " " << mp[idx] << "\n";
        }
    }



    
    return 0;
}