//https://codeforces.com/problemset/problem/16/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    bool r = true;
    char temp = 'a';
    for (int i = 0; i < n; i++){
        bool b = true;
        for (int j = 0; j < m; j++){
            char ler;
            cin >> ler;
            if(!r) continue;
            if(temp == ler && b){
                r = false;
                continue;
            }else if(temp != ler && !b){
                r = false;
                continue;
            }
            temp = ler;
            b = false;
            
        }
        
    }
    
    if(r) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}