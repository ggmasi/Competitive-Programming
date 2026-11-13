// url: 
// Title: 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        if(n == 1 || n == 2){
            cout << n << "\n";
            for(auto x : v) cout << x << " ";
            cout << "\n";
            continue;
        }
        int ans = 1;
        sort(v.begin(), v.end());
        vector<int> primeiro;
        primeiro.push_back(v[0]);
        vector<int> meio;
        vector<int> resto;
        for (int i = 1; i < n; i++){
            if(v[i] != v[i-1]) ans++, primeiro.push_back(v[i]);
            else if(resto.empty() || resto.back() != v[i]){
                ans++;
                resto.push_back(v[i]);
            }else{
                meio.push_back(v[i]);
            }
        }

        cout << ans << "\n";
        for(auto x : primeiro){
            cout << x << " ";
        }        
        if(!meio.empty()){
            for(auto x : meio){
                cout << x << " ";
            }
        }
        if(!resto.empty()){
            for (int i = resto.size()-1; i >= 0; i--){
                cout << resto[i] << " ";
            }
        }
        cout << "\n";
        
        
    }
    
    return 0;
}