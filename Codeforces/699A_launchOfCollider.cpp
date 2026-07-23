//https://codeforces.com/contest/699/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    vector<int> v(n);
    int ans = 1e9+7;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if(i == 0) continue;

        if(s[i] == 'L' && s[i-1] == 'R'){
            ans = min(ans, (v[i]-v[i-1])/2);
        }
    }
    if(ans == 1e9+7){
        cout << -1 << endl;
        return 0;
    }

    cout << ans << "\n";
    return 0;
}