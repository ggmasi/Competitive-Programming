// url: https://codeforces.com/problemset/problem/1535/C
// Title: Unstable String
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<int> z(s.length(), 0);
        vector<int> u(s.length(), 0);
        z[0] = s[0] == '0' || s[0] == '?' ? 1 : 0;
        u[0] = s[0] == '1' || s[0] == '?' ? 1 : 0;
        long long int ans = 1;
        for (int i = 1; i < s.length(); i++){
            char temp = s[i];
            z[i] = temp == '0' || temp == '?' ? u[i-1]+1 : 0;
            u[i] = temp == '1' || temp == '?' ? z[i-1]+1 : 0;
            ans += max(z[i], u[i]);
        }
        
        cout << ans << "\n";
    }
    return 0;
}