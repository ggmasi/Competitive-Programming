//https://codeforces.com/contest/129/problem/B
// Students And Shoelaces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n+1);
    vector<int> inc(n+1, 0);
    vector<int> vis(n+1, 0);

    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        inc[a]++; inc[b]++;
    }

    int ans = 0;
    bool flag = true;
    while(flag){
        vector<int> retirados;
        for(int i = 1; i <= n; i++){
            if(inc[i] == 1 && vis[i] == 0){
                retirados.push_back(i);
            }
        }

        if(retirados.size() > 0){
            ans++;
            for(auto x : retirados){
                vis[x] = 1; 
                for(auto y : adj[x]){
                    inc[y]--;
                }
            }
        }else{
            flag = false;
        }
    }

    cout << ans << "\n";

    

    
}