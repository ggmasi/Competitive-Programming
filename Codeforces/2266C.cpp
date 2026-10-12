// url: https://codeforces.com/contest/2266/problem/C
// Title: AND, OR, Sort!
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
        bool flag = false;
        if(s[0] == '1') flag = true;
        int temp = 1;

        vector<int> pref(n, 0);
        

        for (int i = 1; i < n; i++){
            if(flag && s[i] == '0'){
                ans++;
                continue;
            } 

            pref[i] = pref[i-1];
            if(s[i] == '1') pref[i]++;

        }
        
        if(flag){
            cout << ans << "\n";
            continue;
        }
    
        vector<int> suff(n, 0);
        ans = suff[n-1]+pref[n-1];
        for (int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1];
            if(s[i+1] == '0') suff[i]++;
        }
        

        for (int i = 0; i < n; i++){
            ans = min(ans, pref[i]+suff[i]);
        }
        
        

        // for(auto x : pref){
        //     cout << x << " ";
        // }
        // cout << endl;
        // for(auto x : suff){
        //     cout << x << " ";
        // }
        

        cout << ans << "\n";


    }
    
    return 0;
}