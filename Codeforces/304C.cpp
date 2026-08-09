// url: https://codeforces.com/contest/304/problem/C
// Title: Lucky Permutation Triple
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    if(n == 2){
        cout << -1 << "\n";
        return 0;
    }

    if(n == 1){
        cout << "0\n0\n0\n";
        return 0;
    }
    
    vector<int> a(n), b(n);
    vector<bool> v(n, false);
    for (int i = 0; i < n; i++){
        a[i] = i;
        // cout << i << " ";
    }
    for (int i = 0; i < n; i++){
        b[i] = (i+n-1)%n;
        // cout << (i+n-1)%n << " ";
    }
    vector<int> ans;
    for (int i = 0; i < n; i++){
        if(!v[(a[i]+b[i])%n]){
            v[(a[i]+b[i])%n] = true;
            ans.push_back((a[i]+b[i])%n);
        }else{
            cout << -1 << "\n";
            return 0;
        }
    }
    
    for (auto x : a){
        cout << x << " ";
    }
    cout << "\n";
    for (auto x : b){
        cout << x << " ";
    }
    cout << "\n";
    for (auto x : ans){
        cout << x << " ";
    }
    cout << "\n";
    

    return 0;
}