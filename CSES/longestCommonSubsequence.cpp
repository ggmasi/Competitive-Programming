#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++){
        cin >> v2[i];
    }

    vector<vector<int>> lcs(n+1, vector<int>(m+1, 0));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if(v1[i-1] == v2[j-1]){
                lcs[i][j] = lcs[i-1][j-1]+1;
            }else{
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
        
    }
    
    vector<int> bt;

    int i = n, j = m;
    while(i >= 1 && j >= 1){
        if(v1[i-1] == v2[j-1]){
            bt.push_back(v1[i-1]);
            i--; j--;
        }else{
            if(lcs[i-1][j] >= lcs[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
    }
    
    cout << lcs[n][m] << endl;
    for (int k = bt.size()-1; k >= 0; k--){
        cout << bt[k] << " ";
    }
    cout << endl;
    return 0;
}