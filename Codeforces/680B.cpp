//https://codeforces.com/contest/680/problem/B
// Bear And Finding Criminals
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n >> a;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }

    int esq = a-1, dir = a+1;
    int ans = v[a];
    while(esq > 0 || dir <= n){
        if(esq > 0 && dir <= n){
            ans += v[esq] == v[dir] ? v[esq]+v[dir] : 0;
        }else if(esq > 0){
            ans += v[esq];
        }else if(dir <= n){
            ans += v[dir];
        }

        esq--;dir++;
    }

    cout << ans << "\n";
}