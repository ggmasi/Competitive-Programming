// url: https://codeforces.com/problemset/problem/1354/B
// Title: Ternary String
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int last1 = -1, last2 = -1, last3 = -1;
        int l = 0, r = 0;
        int ans = 200001;
        while(1){
            if(r >= s.length() && (last1 == -1 || last2 == -1 || last3 == -1)) break;

            if(last1 != -1 && last2 != -1 && last3 != -1){
                ans = min(ans, r-l);
                if(last1 == l) last1 = -1;
                else if(last2 == l) last2 = -1;
                else if(last3 == l) last3 = -1;
                l++;
            }else{
                if(s[r] == '1') last1 = r;
                else if(s[r] == '2') last2 = r;
                else last3 = r;
                r++;
            }
        }
        if(ans == 200001) ans = 0;
        cout << ans << "\n";
    }

    return 0;
}