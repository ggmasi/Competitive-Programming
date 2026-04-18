//https://judge.beecrowd.com/pt/problems/view/2243
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> alturas(n);
    vector<int> esq(n);
    vector<int> dir(n);
    cin >> alturas[0];
    esq[0] = min(1, alturas[0]);
    for (int i = 1; i < n; i++){
        cin >> alturas[i];
        esq[i] = min(esq[i-1]+1, alturas[i]);
    }

    dir[n-1] = min(alturas[n-1], 1);
    for (int i = n-2; i >= 0; i--){
        dir[i] = min(alturas[i], dir[i+1]+1);
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans, min(esq[i], dir[i]));
    }


    cout << ans << endl;
}