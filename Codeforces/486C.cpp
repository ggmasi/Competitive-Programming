// url: https://codeforces.com/contest/486/problem/C
// Title: Palindrome Transformation
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p; cin >> n >> p;
    string s; cin >> s;

    vector<int> idxs;
    int l = 0, r = s.length()-1;
    int ans = 0;
    while(l < r){
        if(s[l] != s[r]){
            idxs.push_back(l+1);            
            int sum = min(abs(s[l]-s[r]), 26-abs(s[l]-s[r]));
            ans += sum;
        }
        l++; r--;
    }

    if(p > n/2) p = n-p+1;
    

    if(idxs.size() == 0){
        cout << 0 << "\n";
        return 0;
    }

    if(p <= idxs[0]) ans += idxs.back()-p;
    else if(p >= idxs.back()) ans += p-idxs[0];
    else ans += min(idxs.back()-p + idxs.back()-idxs[0], p-idxs[0] + idxs.back()-idxs[0]);



    cout << ans << "\n";

    
    return 0;
}