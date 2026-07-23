//https://codeforces.com/contest/218/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;

    vector<int> v((2*n)+1);
    for (int i = 0; i < (2*n)+1; i++){
        cin >> v[i];
    }
    
    for (int i = 1; i < (2*n)+1 && k > 0; i += 2){
        if(v[i-1]+1 < v[i] && v[i+1]+1 < v[i]){
            v[i]--;
            k--;
        }
    }

    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}