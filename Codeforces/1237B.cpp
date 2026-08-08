//https://codeforces.com/contest/1237/problem/B
// Balanced Tunnel
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<bool> v(n+1, false);
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    int idxA = 0, idxB = 0;
    int count = 0;

    while(idxB < n){
        if(a[idxA] == b[idxB]){
            idxA++;
            idxB++;
            continue;
        }

        if(!v[a[idxA]]){
            v[b[idxB]] = true;
            idxB++;
            count++;
            continue;
        }

        idxA++;
        
    }

    cout << count << "\n";
}