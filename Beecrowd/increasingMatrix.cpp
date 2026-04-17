//https://judge.beecrowd.com/pt/problems/view/2242
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int matrix[n][m];
    int cnt = 0;
    bool b = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
            cnt += matrix[i][j];
            if(i > 0 && matrix[i-1][j] >= matrix[i][j] && matrix[i][j] != 0) b = false;
            if(j > 0 && matrix[i][j-1] >= matrix[i][j] && matrix[i][j] != 0) b = false;
            if(i > 0 && j > 0 && matrix[i-1][j-1] >= matrix[i][j] && matrix[i][j] != 0) b = false;
        }
    }
    if(b){
        for (int i = n-2; i >= 0; i--){
            for (int j = m-2; j >= 0; j--){
                if(matrix[i][j] == 0){
                    matrix[i][j] = min(matrix[i+1][j], matrix[i][j+1]) - 1;
                    cnt += matrix[i][j];
                }else if(matrix[i][j] == matrix[i][j+1] || matrix[i][j] == matrix[i+1][j]){
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }else{
        cout << -1 << endl;
        return 0;
    }
    

    cout << cnt << endl;
    return 0;
}