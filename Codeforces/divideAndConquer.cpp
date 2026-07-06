//https://codeforces.com/contest/2241/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int x, y; cin >> x >> y;

        if(y > x){
            cout << "NO\n";
            continue;
        }

        if(x%y == 0){
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";

    }
}