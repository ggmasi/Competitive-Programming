// url: https://codeforces.com/problemset/problem/2236/A
// Title: Games on the Train
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int menor = 10, maior = -1;
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            menor = min(menor, temp);
            maior = max(maior, temp);
        }
        
        cout << maior-menor+1 << "\n";

    }
    
    return 0;
}