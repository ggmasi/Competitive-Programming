// url: https://codeforces.com/contest/424/problem/C
// Title: Magic Formulas
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> v(n+1, 0);
    for (int i = 1; i <= n; i++){
        v[i] = v[i-1]^i;
    }

    int q;
    cin >> q;
    for (int i = 2; i <= n; i++){
        int temp; cin >> temp;
        if((n/i)%2){
            q ^= v[i-1];
        }

        q ^= v[n%i];
        q ^= temp;
    }
    
    cout << q << "\n";
    

    return 0;
}