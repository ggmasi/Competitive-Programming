// url: https://codeforces.com/problemset/problem/1774/D
// Title: Same Count One
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        vector<vector<int>> v(n, vector<int> (m));

        vector<pii> qnt(n, {0, 0});
        int total1 = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                int temp; cin >> temp;
                v[i][j] = temp;
                qnt[i].second = i;
                if(temp == 1){
                    total1++;
                    qnt[i].first++;
                }
            }
        }
        
        if(total1%n != 0){
            cout << -1 << "\n";
            continue;
        }

        sort(qnt.begin(), qnt.end());

        int l = 0, r = n-1;
        vector<int> x, y, z;
        while(qnt[l].first != total1/n){
            
            for (int i = 0; i < m && qnt[l].first != total1/n && qnt[r].first != total1/n; i++){
                if(v[qnt[l].second][i] == 0 && v[qnt[r].second][i] == 1){
                    qnt[l].first++;
                    v[qnt[l].second][i] = 1;
                    qnt[r].first--;
                    v[qnt[r].second][i] = 0;
                    x.push_back(qnt[l].second+1);
                    y.push_back(qnt[r].second+1);
                    z.push_back(i+1);
                }
            }
            
            if(qnt[l].first == total1/n) l++;
            if(qnt[r].first == total1/n) r--;            
        }
        cout << x.size() << "\n";
        for (int i = 0; i < x.size(); i++){
            cout << x[i] << " " << y[i] << " " << z[i] << "\n";
        }
        

    }
    
    return 0;
}