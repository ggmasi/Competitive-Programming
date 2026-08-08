//https://codeforces.com/contest/2248/problem/B
// Merge To Match
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> vn(n);
        vector<int> vm(m);
        for (int i = 0; i < n; i++){
            cin >> vn[i];
        }

        for (int i = 0; i < m; i++){
            cin >> vm[i];
        }

        if(n < 2*m){
            cout << "NO\n";
            continue;
        }

        sort(vn.begin(), vn.end());
        sort(vm.begin(), vm.end());
        bool f = true;
        for (int i = 0; i < m; i++){
            if(vn[i] > vm[i] || vm[i] > vn[n-m+i]){
                cout << "NO\n";
                f = false;
                break;
            }
        }
        
        if(f){
            cout << "YES\n";
        }
        
    }

    return 0;
}