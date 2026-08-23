// url: https://codeforces.com/contest/490/problem/B
// Title: Queue
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    map<int, int> frente;
    map<int, int> tras;
    vector<pair<int, int>> freq(1e6 + 5, {10, 0});
    vector<int> fila(n, 0);
    for (int i = 0; i < n; i++){
        int f, t; cin >> f >> t;

        if(freq[f].first == 10) freq[f].first = 0;
        freq[f].first++;
        freq[f].second = f;

        if(freq[t].first == 10) freq[t].first = 0;
        freq[t].first++;
        freq[t].second = t;

        frente[t] = f;
        tras[f] = t;
        
        if(f == 0){
            fila[1] = t;
        }
        if(t == 0){
            fila[n-2] = f;
        }
    }

    sort(freq.begin(), freq.end());

    // cout << freq[0].second << " " << freq[1].second << "\n";

    for (int i = 1; i < n-2; i+=2){
        fila[i+2] = tras[fila[i]];
    }

    if(n%2 == 0){
        for(int i = n-2; i >= 2; i -= 2){
            fila[i-2] = frente[fila[i]];
        }
    }else{
        if(frente[freq[0].second] == 0) fila[0] = freq[0].second;
        else fila[0] = freq[1].second;
        for (int i = 0; i < n-2; i +=2){
            fila[i+2] = tras[fila[i]];
        }
        
    }

    for (int i = 0; i < n; i++){
        cout << fila[i] << " ";
    }
    
    


    return 0;
}