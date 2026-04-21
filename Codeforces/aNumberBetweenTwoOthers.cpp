//https://codeforces.com/contest/2225/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t; cin >> t;
    
    while(t--){
        long long int x, y; cin >> x >> y;
        bool b = false;
        for (long long int i = x+x; i < y; i += x){
            if(y%i != 0){
                b = true;
                break;
            }
        }
        if(b){
            cout << "YES\n";
        }else cout << "NO\n";

    }

    return 0;
}