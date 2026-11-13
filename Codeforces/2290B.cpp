// url: 
// Title: 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        string s = "B";
        int n; cin >> n;
        string temp; cin >> temp;
        s += temp;
        int ans = 0;
        for (int i = 0; i < n; i++){
            if(s[i] == s[i+1]) ans++;
        }
        cout << ans << "\n";
    }
    
    return 0;
}