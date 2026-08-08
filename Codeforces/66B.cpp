//https://codeforces.com/contest/66/problem/B
// Petya And Countryside
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n), esq(n), dir(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    esq[0] = 1, dir[n-1] = 1;
    
    for (int i = 1; i < n; i++){
        esq[i] = v[i-1] <= v[i] ? esq[i-1]+1 : 1;
    }

    for (int i = n-2; i >= 0; i--){
        dir[i] = v[i+1] <= v[i] ? dir[i+1]+1 : 1;
    }

    
    int ans = -1;
    for (int i = 0; i < n; i++){
        ans = max(ans, esq[i]+dir[i]-1);
    }
    
    cout << ans << "\n";
    return 0;
}