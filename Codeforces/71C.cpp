// url: https://codeforces.com/contest/71/problem/C
// Title: Round Table Knights
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 1; i <= n/3; i++){
        if(n%i != 0) continue;

        for (int j = 0; j < i; j++){
            bool flag = true;
            for (int k = j; k < n; k+=i){
                if(v[k] == 0){
                    flag = false;
                    break;
                }
            }
            
            if(flag){
                cout << "YES\n";
                return 0;
            }

        }
        
    }
    
    cout << "NO\n";
    
    
    return 0;
}