//https://codeforces.com/contest/768/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);

    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n <= 2){
        cout << 0 << endl;
        return 0;
    } 
    
    sort(v.begin(), v.end());

    int ini = 0, fim = n-1;
    while(ini < n-1 && v[ini] == v[ini+1]) ini++;
    while(fim > 0 && v[fim] == v[fim-1]) fim--;

    if(fim-ini > 0) cout << fim-ini-1 << endl;
    else cout << 0 << endl;
    return 0;
}