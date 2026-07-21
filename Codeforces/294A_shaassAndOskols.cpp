//https://codeforces.com/contest/294/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;

        if(x == 1){
            v[1] += v[0]-y;
            v[0] = 0;
        }else if(x == n){
            v[n-2] += min(y-1, v[n-1]);
            v[n-1] = 0;
        }else{
            v[x-2] += min(y-1, v[x-1]);
            v[x] += v[x-1]-y;
            v[x-1] = 0;
        }
    }
    
    for(auto z : v){
        cout << z << "\n";
    }
    return 0;
}