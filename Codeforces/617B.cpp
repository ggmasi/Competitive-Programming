// url: https://codeforces.com/contest/617/problem/B
// Title: Chocolate
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long int ans = 1;
    vector<int> v(n);
    vector<bool> esq(n, false), dir(n, false);
    bool has1 = false;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int idx = 0;
    while(idx < n && v[idx] == 0){
        idx++;
    }
    int ini = idx;

    idx = n-1;
    while(idx >= 0 && v[idx] == 0){
        idx--;
    }
    if(ini == idx){
        cout << 1 << "\n";
        return 0;
    }else if(ini > idx){
        cout << 0 << "\n";
        return 0;
    }

    // cout << ini << " " << idx << "\n";

    int numZ = 0;
    for (int i = ini; i <= idx; i++){
        if(v[i] == 0) numZ++;
        else{
            if(numZ == 0) continue;
            ans *= numZ+1;
            numZ = 0; 
        }
    }
    
    
    cout << ans << "\n";
    return 0;
    
    
}