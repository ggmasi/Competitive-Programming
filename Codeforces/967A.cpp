// url: https://codeforces.com/problemset/problem/967/A
// Title: Mind the Gap
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s; cin >> n >> s;
    int ansh = -1, ansm = -1;
    vector<int> v(n+1);
    v[0] = 0;
    for (int i = 1; i <= n; i++){
        int h, m; cin >> h >> m;
        int tempo = h*60 + m;
        v[i] = tempo;

        if(i == 1){
            if(tempo > s){
                ansh = 0;
                ansm = 0;
            }
        }

        if(ansh == -1 && ansm == -1){
            if(tempo-v[i-1] > (2*s)+1){
                ansh = (v[i-1]+s+1)/60;
                ansm = (v[i-1]+s+1)%60;
            }
        }
    }

    
    if(ansh == -1 && ansm == -1){
        ansh = (v[n]+s+1)/60;
        ansm = (v[n]+s+1)%60;
    }

    cout << ansh << " " << ansm << "\n";

    
    return 0;
}