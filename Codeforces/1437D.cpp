// url: https://codeforces.com/problemset/problem/1437/D
// Title: Minimal Height Tree
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> h(n+1, 0);
        int hAtual = 1;
        h[1] = 1;
        int ultimo; cin >> ultimo;
        for (int i = 2; i <= n; i++){
            int atual; cin >> atual;
            if(atual < ultimo){
                hAtual++;
            }
            h[i] = h[hAtual]+1;
            ultimo = atual;
        }
        
        cout << h[n]-1 << "\n";
        


    }
}