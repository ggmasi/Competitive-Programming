// url: https://codeforces.com/problemset/problem/1783/B
// Title: Matrix of Differences
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;

        int nump = 1, numg = n*n;

        for (int i = 0; i < n*n; i++){
            if(i%2 == 0){
                v.push_back(numg);
                numg--;
            }else{
                v.push_back(nump);
                nump++;
            }
        }

        vector<vector<int>> m(n, vector<int>(n));

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i%2 == 0){
                    m[i][j] = v[n*i + j];
                }else{
                    m[i][n-j-1] = v[n*i + j];
                }
            }
            
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << m[i][j] << " ";
            }
            cout << "\n";
        }
        

    }


    return 0;
}