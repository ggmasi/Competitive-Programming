// url: https://codeforces.com/problemset/problem/175/A
// Title: Robot Bicorn Attack
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int ehValido(string p){
    if(p.empty() || p.length() > 7) return -1;

    if(p.length() > 1 && p[0] == '0') return -1;

    int n = stoi(p);
    if(n > 1e6) return -1;
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;

    if(s.length() < 3){
        cout << "-1\n";
        return 0;
    }

    int ans = -1;

    for (int i = 1; i <= s.length()-2; i++){
        for (int j = i+1; j <= s.length()-1; j++){
            string s1 = s.substr(0, i);
            string s2 = s.substr(i, j-i);
            string s3 = s.substr(j);

            int a = ehValido(s1), b = ehValido(s2), c = ehValido(s3);
            if(a != -1 && b != -1 && c != -1){
                ans = max(ans, a+b+c);
            }
        }
        
    }
    cout << ans << "\n";

    return 0;
}