// url: https://codeforces.com/problemset/problem/1353/C
// Title: Board Moves
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<long long> v(5*(1e5+5), 0);

    v[3] = 8;

    long long a = 2;
    for (int i = 5; i < 5*(1e5); i+= 2){
        v[i] = v[i-2]+(8*a*a);
        a++;
    }
    
    
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << v[n] << "\n";
    }
    
    return 0;
}