// url: https://codeforces.com/contest/84/problem/C
// Title: Biathlon
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<pii> alvos(n);
    vector<int> alvosX(n);
    vector<pii> indices(n);
    for (int i = 0; i < n; i++){
        cin >> alvos[i].first >> alvos[i].second;
        alvosX[i] = alvos[i].first;
        indices[i].first =alvos[i].first;
        indices[i].second = i;
    }

    sort(alvos.begin(), alvos.end());
    sort(alvosX.begin(), alvosX.end());
    sort(indices.begin(), indices.end());
    
    vector<int> res(n, -1);
    int ans = 0;
    int m; cin >> m;
    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        int idx = upper_bound(alvosX.begin(), alvosX.end(), x)-alvosX.begin();
        
        if(idx < n && ((alvosX[idx]-x)*(alvosX[idx]-x) + y*y) <= alvos[idx].second*alvos[idx].second){
            if(res[indices[idx].second] == -1){
                res[indices[idx].second] = i+1;
                ans++;
            } 
        }

        if(idx > 0 && ((alvosX[idx-1]-x)*(alvosX[idx-1]-x) + y*y) <= alvos[idx-1].second*alvos[idx-1].second){
            if(res[indices[idx-1].second] == -1){
                res[indices[idx-1].second] = i+1;
                ans++;
            } 
        }
    }
    
    cout << ans << "\n";
    for(auto x : res){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}