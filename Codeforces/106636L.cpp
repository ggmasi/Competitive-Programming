// url: https://codeforces.com/gym/106636/problem/L
// Title: GePeTo's Clones
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    map<int, int> m;
    long long ans = 0;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(m.contains(temp)){
            ans += m[temp];
        }
        m[temp]++;
    }
    
    cout << ans << "\n";

    return 0;
}