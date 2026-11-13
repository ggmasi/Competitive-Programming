// url: https://codeforces.com/contest/510/problem/A
// Title: Fox And Snake
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(i%2){
                if((i-1)%4){
                    if(j == 0) cout << "#";
                    else cout << ".";
                }else if(j == m-1) cout << "#";
                else cout << ".";
            }else cout << "#";
        }
        cout << "\n";
    }
    
    
    return 0;
}