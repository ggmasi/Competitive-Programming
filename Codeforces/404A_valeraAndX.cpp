//https://codeforces.com/contest/404/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<char>> m(n, vector<char>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> m[i][j];            
        }
    }
    
    char x = m[0][0], y = m[0][1];
    if(x == y){
        cout << "NO\n";
        return 0;
    }

    int esq = 0, dir = n-1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if((j == esq || j == dir)){
                if(m[i][j] != x){
                    cout << "NO\n";
                    return 0;
                }
            }else if(m[i][j] != y){
                cout << "NO\n";
                return 0;
            }
        }
        esq++;
        dir--;
    }

    cout << "YES\n";
    return 0;
}