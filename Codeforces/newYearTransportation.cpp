//https://codeforces.com/problemset/problem/500/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    int pos = 1;
    bool flag = false;
    for (int i = 1; i < n; i++){
        int temp; cin >> temp;
        if(i == pos){
            pos += temp;
        }
        if(pos == t) flag = true; 
        
    }
    
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}