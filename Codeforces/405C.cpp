// url: https://codeforces.com/contest/405/problem/C
// Title: Unusual Product
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(n));


    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
            if(i == j){
                res += v[i][i];
                res %= 2;
            }
        }
    }


    

    int q; cin >> q;
    while(q--){
        int t; cin >> t;
        if(t == 1 || t == 2){
            int x; cin >> x;
            res ^= 1;
        }else{
            cout << res;
        }
    }
    
    
    
    return 0;
}