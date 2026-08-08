//https://codeforces.com/contest/1030/problem/B
// Vasya And Cornfield
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n >> d;
    int m; cin >> m;

    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;

        if(x >= 0 && x <= n && y >= 0 && y <= n && x+y >= d && x+y <= (n+(n-d)) && abs(x-y) <= d){
            cout << "YES\n";
        }else cout << "NO\n";
    }
    
}