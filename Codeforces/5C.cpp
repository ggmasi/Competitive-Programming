// url: https://codeforces.com/problemset/problem/5/C
// Title: Longest Regular Bracket Sequence
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    stack<int> p;
    
    p.emplace(-1);

    int maxlen = 0, ans = 1;

    for (int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            p.emplace(i);
        }else{
            int temp = p.top();
            p.pop();
            if(p.empty()){
                p.emplace(i);
            }else{
                int dist = i-p.top();
                if(dist > maxlen){
                    maxlen = dist;
                    ans = 1;
                }else if(dist == maxlen){
                    ans++;
                }
            }
        }
    }
    
    cout << maxlen << " " << ans << "\n";


    return 0;
}