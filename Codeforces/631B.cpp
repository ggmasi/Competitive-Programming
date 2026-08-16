// url: https://codeforces.com/contest/631/problem/B
// Title: Print Check
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

struct query{
    int tipo;
    int idx;
    int cor;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, k; cin >> n >> m >> k;

    vector<vector<int>> v(n, vector<int>(m, 0));

    vector<query> q(k);

    for (int i = 0; i < k; i++){
        cin >> q[i].tipo >> q[i].idx >> q[i].cor; 
    }
    
    int num = n*m;
    for (int i = k-1; i >= 0 && num > 0; i--){
        if(q[i].tipo == 1){
            for (int j = 0; j < m; j++){
                if(v[q[i].idx-1][j] != 0) continue;
                num--;
                v[q[i].idx-1][j] = q[i].cor;
            }
        }else{
            for(int j = 0; j < n; j++){
                if(v[j][q[i].idx-1] != 0) continue;
                num--;
                v[j][q[i].idx-1] = q[i].cor;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    



    
    return 0;
}