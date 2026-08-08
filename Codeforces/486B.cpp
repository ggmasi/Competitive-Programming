//https://codeforces.com/contest/486/problem/B
// Or In Matrix
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    
    vector<vector<int>> v(m, vector<int> (n));
    vector<vector<int>> ans(m, vector<int> (n, 1));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
            if(v[i][j] == 0){
                for (int idx = 0; idx < m; idx++){
                    ans[idx][j] = 0;
                }
                
                for (int idx = 0; idx < n; idx++){
                    ans[i][idx] = 0;
                }
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(v[i][j] == 1){
                bool flag = false;
                for (int idx = 0; idx < m; idx++){
                    if(ans[idx][j] == 1){
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    for (int idx = 0; idx < n; idx++){
                        if(ans[i][idx] == 1){
                            flag = true;
                            break;
                        }
                    }
                }

                if(!flag){
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }

    cout << "YES\n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    

    
        
    return 0;
    
}