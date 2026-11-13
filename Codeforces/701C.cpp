// url: https://codeforces.com/group/mckgAGLrBx/contest/713160/problem/D
// Title: They Are Everywhere
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    string s;
    set<char> original;
    for (int i = 0; i < n; i++){
        char c; cin >> c;
        original.insert(c);
        s.push_back(c);
    }

    // cout << original.size() << endl;
    
    
    set<char> st;
    map<char, int> mp;
    int begin = 0;
    st.insert(s[0]);
    mp[s[0]] = 0;
    int ans = 1e6+5;
    for (int i = 1; i < n; i++){
        if(st.contains(s[i]) && s[i] == s[begin]){
            mp[s[i]] = i;
            begin++;
            while(begin != mp[s[begin]]) begin++;
        }else{
            st.insert(s[i]);
            mp[s[i]] = i;
        }
        
        if(st.size() == original.size()){
            ans = min(ans, i-begin+1);
        }
        // cout << begin << endl;
    }

    if(st.size() == original.size()){
        ans = min(ans, (n-1)-begin+1);
    }
    
    cout << ans << "\n";    
    
    
    
    return 0;
}