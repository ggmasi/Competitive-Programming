// url: https://codeforces.com/problemset/problem/1468/C
// Title: Berpizza
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

struct compare {
    bool operator()(pii& a, pii& b){
        if(a.first != b.first) return a.first < b.first;
        return a.second > b.second;
    }
    
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q; cin >> q;
    priority_queue<pii, vector<pii>, compare> filaP;
    map<int, int> mp;
    int next = 1;
    int atual = 1;
    while(q--){
        int t; cin >> t;

        if(t == 1){
            int m; cin >> m;
            mp[next] = m;
            filaP.push({m, next});
            next++;
        }else if(t == 2){
            while(mp[atual] == -1) atual++;
            cout << atual << " ";
            mp[atual] = -1;
            atual++;
        }else{
            while(mp[filaP.top().second] == -1) filaP.pop();
            pii p = filaP.top();
            filaP.pop();
            cout << p.second << " ";
            mp[p.second] = -1;
        }
    }
    
    return 0;
}