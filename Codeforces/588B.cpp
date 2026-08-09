// url: 
// Title: 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    for (int i = large.size() - 1; i >= 0; i--) {
        res.push_back(large[i]);
    }

    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll int n; cin >> n;
    
    vector<ll> ans = getDivisors(n);
    ll maior = 1;
    for(auto x : ans){
        vector<ll> divs = getDivisors(x);
        bool flag = true;
        for(auto y : divs){
            ll raiz = sqrt(y);
            if(raiz*raiz == y && y != 1){
                flag = false;
                break;
            }
        }
        if(flag) maior = x;
    }
    
    cout << maior << "\n";
    
    
    return 0;
}