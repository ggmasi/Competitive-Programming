//https://codeforces.com/problemset/problem/1671/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> v(n, make_pair(0, 0));
        for (int i = 0; i < n; i++){
            cin >> v[i].first;
        }

        if(n == 1){
            cout << "YES\n";
            continue;
        }

        if(v[1].first-v[0].first > 1){
            v[0].first++;
            v[0].second = 1;
        } 
        bool f = true;
        for (int i = 1; i < n; i++){
            v[i].second = v[i-1].second;
            if(v[i].first-v[i-1].first == 1) continue;
            if(v[i-1].second == 0){
                v[i-1].first++;
                v[i-1].second = 1;
                v[i].second = 1;
            }
            if(v[i].first-v[i-1].first == 1) continue;
            v[i].first--;
            if(v[i].first-v[i-1].first != 1){
                f = false;
                break;
            }
        }
        
        if(f){
            cout << "YES\n";
        }else cout << "NO\n";
        
    }
}