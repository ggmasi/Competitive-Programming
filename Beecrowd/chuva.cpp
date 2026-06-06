//https://judge.beecrowd.com/pt/problems/view/3052
#include <bits/stdc++.h>
using namespace std;

int n, m; 

void solve(vector<vector<char>>& matriz, int i, int j){
    matriz[i][j] = 'o';
    
    if(i+1 < n && matriz[i+1][j] == '.'){
        solve(matriz, i+1, j);
    }

    if(j+1 < m && i+1 < n && matriz[i][j+1] == '.' && matriz[i+1][j] == '#'){
        solve(matriz, i, j+1);
    }

    if(i+1 < n && j-1 >= 0 && matriz[i][j-1] == '.' && matriz[i+1][j] == '#'){
        solve(matriz, i, j-1);
    }

    return;
}

int main(){
    cin >> n >> m;
    vector<vector<char>> matriz(n, vector<char>(m));
    
    int x, y;

    for (int i = 0; i < n; i++){
        cin.ignore();
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 'o'){
                x = i;
                y = j;
            }
        }
    }

    solve(matriz, x, y);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << matriz[i][j];
        }
        cout << endl;
    }
    
}