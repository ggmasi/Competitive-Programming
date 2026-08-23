// url: https://codeforces.com/contest/253/problem/C
// Title: Text Editor
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
    r1--; c1--; r2--; c2--;

    queue<pii> q;
    vector<vector<int>> d(n, vector<int>(100005, -1));

    q.push({r1, c1});
    d[r1][c1] = 0;
    
    while(!q.empty()){
        pii atual = q.front();
        q.pop();

        int r = atual.first;
        int c = atual.second;

        vector<int> dx = {1, -1, 0, 0};
        for (int i = 0; i < 4; i++){
            int novoR = r+dx[i];
            int novoC = c;
            if(novoR >= 0 && novoR < n){
                if(i == 0 || i == 1){
                    novoC = min(c, v[novoR]);
                }else if(i == 2){
                    novoC = c-1;
                }else novoC = c+1;
            
                if(novoC >= 0 && novoC <= v[novoR] && d[novoR][novoC] == -1){
                    q.push({novoR, novoC});
                    d[novoR][novoC] = d[r][c]+1;
                }
            }
        }
        
    }
    
    
    cout << d[r2][c2] << "\n";

    return 0;
}



