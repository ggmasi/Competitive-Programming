// url: 
// Title: 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        int mid = (n/2)-1;
        while(1){
            char maior = 'a';
            for (int i = 0; i <= mid; i++){
                if(s[i] != s[n-1-i]){
                    maior = max({s[i], s[n-1-i], maior});
                }
            }

            if(maior == 'a') break;
            ans++;
            for (int i = 0; i < n; i++){
                if(s[i] == maior) s[i] = maior-1;
            }
            // cout << s << "\n";
            
        }
        
        cout << ans << "\n";
        

    }
    
    return 0;
}