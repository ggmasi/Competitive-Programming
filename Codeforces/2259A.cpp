// url: https://codeforces.com/contest/2259/problem/A
// Title: Moo Language School
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int farms = n/k;
        int ans = 0;
        string s; cin >> s;
        int ptr = 0;
        for (int i = 0; i < farms; i++){
            bool flag = false;
            for (int i = 0; i < k; i++){
                if(s[ptr] == '0') flag = true;
                ptr++;
            }
            if(!flag) ans++;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}