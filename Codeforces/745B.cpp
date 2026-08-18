// url: https://codeforces.com/problemset/problem/745/B
// Title: Hongcow Solves A Puzzle
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n, m; cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));
    vector<int> qtd(n);
    for (int i = 0; i < m; i++){
        cin >> v[0][i];
        if(v[0][i] == 'X') qtd[0]++;
    }
    bool temX = false;
    bool flag = true;
    for (int i = 1; i < n; i++){
        bool flag2 = true;
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
            if(v[i][j] == 'X') qtd[i]++;
            if(v[i-1][j] != v[i][j]) flag2 = false;
        }

        if(!flag2 && qtd[i] > 0 && qtd[i-1] > 0) flag = false;
    }
    
    if(flag){
        cout << "YES\n";
    }else cout << "NO\n";
    
    return 0;
}