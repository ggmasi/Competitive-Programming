// url: https://codeforces.com/contest/515/problem/C
// Title: Drazil And Factorial
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    string s; cin >> s;
    map<char, string> m;
    m['0'] = ""; m['1'] = "";
    m['2'] = "2"; m['3'] = "3"; m['5'] = "5"; m['7'] = "7";
    m['4'] = "322"; m['6'] = "53"; m['8'] = "7222"; m['9'] = "7332";
    string ans;
    for(auto x : s){
        ans.append(m[x]);
    }

    sort(ans.rbegin(), ans.rend());

    cout << ans << "\n";
    return 0;
}