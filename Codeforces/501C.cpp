// url: https://codeforces.com/problemset/problem/501/C
// Title: Misha and Forest
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

struct no{
    int idx;
    int grau;
    int s;
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<no> v(n);
    queue<no> fila;
    for (int i = 0; i < n; i++){
        cin >> v[i].grau >> v[i].s;
        v[i].idx = i;
        if(v[i].grau == 1){
            fila.push(v[i]);
        }
    }
    
    vector<pii> edges;

    while(!fila.empty()){
        no u = fila.front();
        fila.pop();

        if(v[u.idx].grau == 0) continue;

        edges.push_back({u.idx, u.s});

        v[u.idx].grau = 0;
        v[u.s].grau--;
        v[u.s].s ^= u.idx;

        if(v[u.s].grau == 1){
            fila.push(v[u.s]);
        }

    }


    cout << edges.size() << "\n";
    for(auto x : edges){
        cout << x.first << " " << x.second << "\n";
    }
    
    return 0;
}