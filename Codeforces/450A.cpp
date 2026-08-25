// url: https://codeforces.com/problemset/problem/450/A
// Title: Jzzhu and Children
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    
    queue<pii> fila;

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        fila.push({temp, i+1});
    }

    while(fila.size() > 1){
        pii temp = fila.front();
        fila.pop();
        temp.first -= m;
        if(temp.first > 0) fila.push(temp);
        
    }

    cout << fila.front().second << "\n";

    return 0;
}