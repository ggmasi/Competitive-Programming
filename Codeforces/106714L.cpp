// url: codeforces.com/gym/106714/problem/L
// Title: Clothes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> roupas(n);
    ll maxSum = 0;
    ll menor = 1e6;
    for (int i = 0; i < n; i++){
        cin >> roupas[i];
        maxSum += roupas[i];
        menor = min(menor, maxSum);
    }
    
    vector<ll> t1, t2;
    int m; cin >> m;
    for (int i = 0; i < m; i++){
        int t; cin >> t;
        ll x; cin >> x;
        if(t == 1) t1.push_back(x);
        else t2.push_back(x);
    }
    
    bool flag = true;
    for (int i = 0; i < n; i++){
        for(auto x : t1){
            if(roupas[i] < x) flag = false;
        }
        for(auto x : t2){
            if(roupas[i] > x) flag = false;
        }
        if(flag){
            cout << 1 << "\n";
            return 0;
        }
    }
    flag = true;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            for(auto x : t1){
                if(roupas[i]+roupas[j] < x) flag = false;
            }
            for(auto x : t2){
                if(roupas[i]+roupas[j] > x) flag = false;
            }
            if(flag){
                cout << 2 << "\n";
                return 0;
            }
            
        }
        
    }
    flag = true;
    for(auto x : t1){
        if(roupas[0]+roupas[1]+roupas[2] < x) flag = false;
    }
    for(auto x : t2){
        if(roupas[0]+roupas[1]+roupas[2] > x) flag = false;
    }
    if(flag){
        cout << 3 << "\n";
        return 0;
    }

    cout << -1 << "\n";


    return 0;
}