//https://codeforces.com/contest/6/problem/B
#include <bits/stdc++.h>
using namespace std;

vector<int> cores(26, 0);
int n, m; 
char c; 

int busca(int i, int j, vector<vector<char>>& v){
    if(i < 0 || j < 0 || i >= n || j >= m || v[i][j] == '.') return 0;
    char cor = v[i][j];
    int idx = v[i][j]-'A';
    int ans = 0;
    if(cores[idx] == 0){
        ans++;
        cores[idx] = 1;
    }
    v[i][j] = '.';
    if(cor == c){
        ans += busca(i+1, j, v) + busca(i-1, j, v) + busca(i, j+1, v) + busca(i, j-1, v);
    }
    return ans;
}

int main(){
    cin >> n >> m;
    cin >> c;
    vector<vector<char>> v(n, vector<char>(m));
    int a = -1, b = -1; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
            if(a == -1 && b == -1 && v[i][j] == c){
                a = i;
                b = j;
            }
        }
    }
    cores[c-'A'] = 1;

    cout << busca(a, b, v) << "\n";
    return 0;
    
}