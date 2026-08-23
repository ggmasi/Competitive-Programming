// url: https://codeforces.com/contest/378/problem/C
// Title: Maze
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int n, m, k;
vector<vector<char>> v;

vector<int> y = {0, 1, 0, -1};
vector<int> x = {1, 0, -1, 0};

void dfs(int r, int c){
    if(r < 0 || r >= n || c < 0 || c >= m || v[r][c] == '#' || v[r][c] == '$' || v[r][c] == 'X') return;
    v[r][c] = '$';
    for(int i = 0; i < 4; i++){
        dfs(r+y[i], c+x[i]);
    }
    
    if(k > 0){
        v[r][c] = 'X';
        k--;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m >> k;
    v.resize(n);
    int y = 0, x = 0;
    for (int i = 0; i < n; i++){
        v[i].resize(m);
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
            if(v[i][j] == '.'){
                y = i; x = j;
            }
        }
        cin.ignore();
    }
    // cout << y << " " << x << "\n";

    dfs(y, x);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(v[i][j] == '$') v[i][j] = '.';
            cout << v[i][j];
        }
        cout << "\n";
    }
    


    return 0;
}