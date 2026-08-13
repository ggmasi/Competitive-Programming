// url: https://codeforces.com/contest/403/problem/A
// Title: Searching for Graph
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, p; cin >> n >> p;

        int sum = 0;
        for (int i = 1; i < n; i++){
            for (int j = i+1; j <= n; j++){
                cout << i << " " << j << "\n";
                sum++;
                if(sum == (2*n)+p) break;
            }
            if(sum == (2*n)+p) break;
        }
        
    }
    
    return 0;
}