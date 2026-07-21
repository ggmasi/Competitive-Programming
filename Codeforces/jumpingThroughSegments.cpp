//https://codeforces.com/problemset/problem/1907/D
#include <bits/stdc++.h>
using namespace std;

bool solve(int lAtual, int rAtual, int k, vector<int>& l, vector<int>& r, int idx, int n){
    if(idx == n+1) return true;
    if(rAtual < l[idx] || lAtual > r[idx]) return false;

    lAtual = max(lAtual, l[idx]);
    rAtual = min(rAtual, r[idx]);

    return solve(lAtual-k, rAtual+k, k, l, r, idx+1, n);
}

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> l(n+1);
        vector<int> r(n+1);
        int ini = 0;
        int fim = -1;
        l[0] = 0;
        r[0] = 0;
        for (int i = 1; i < n+1; i++){
            cin >> l[i] >> r[i];
            fim = max(fim, max(abs(r[i]-l[i-1]), abs(r[i-1]-l[i])));
        }
        
        int res = -1;
        while(ini <= fim){
            int mid = (ini+fim)/2;
            
            if(solve(-mid, mid, mid, l, r, 1, n)){
                res = mid;
                fim = mid-1;
            }else{
                ini = mid+1;
            }

            // cout << mid << " " << res << endl;
        }

        cout << res << endl;
    }
}