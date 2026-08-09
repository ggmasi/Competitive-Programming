// url: https://codeforces.com/problemset/problem/1190/A
// Title: Tokitsukaze And Discard Items
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m, k; cin >> n >> m >> k;
    vector<long long int> v(m);
    for (int i = 0; i < m; i++){
        cin >> v[i];
    }

    long long int ans = 0;
    long long int removidos = 0;
    long long int idx = 0;
    while(idx < m){
        long long int pagAtual = (v[idx]-1-removidos)/k;
        long long int numAtual = 0;
        while(idx < m && (v[idx]-1-removidos)/k == pagAtual){
            numAtual++;
            idx++;
        }
        removidos += numAtual;
        ans++;
    }

    cout << ans << "\n";
}