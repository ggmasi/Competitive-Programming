//https://codeforces.com/problemset/problem/222/B
// Cosmic Tables
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> v(n, vector<int>(m));
    vector<int> l(n);
    vector<int> c(m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            c[j] = j;
            cin >> v[i][j];
        }
        l[i] = i;   
    }
    
    while(k--){
        char t; cin >> t;
        int a, b; cin >> a >> b;
        if(t == 'c'){
            int temp = c[b-1];
            c[b-1] = c[a-1];
            c[a-1] = temp;
        }else if(t == 'r'){
            int temp = l[b-1];
            l[b-1] = l[a-1];
            l[a-1] = temp;
        }else{
            cout << v[l[a-1]][c[b-1]] << "\n";
        }
    }

    return 0;
}