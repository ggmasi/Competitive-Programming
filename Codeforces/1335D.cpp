// url: https://codeforces.com/problemset/problem/1335/D
// Title: Anti Sudoku
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        vector<vector<char>> v(9, vector<char> (9));

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                cin >> v[i][j];
                if(v[i][j] == '5') v[i][j] = '1';
            }
            cin.ignore();
        }

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                cout << v[i][j];
            }
            cout << "\n";
        }
        
        
    }
}