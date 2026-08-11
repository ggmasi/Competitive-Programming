// url: https://codeforces.com/problemset/problem/1904/B
// Ttile: Collecting Game
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long int> v(n);
        map<long long int, int> m;
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        vector<long long int> ord = v;

        sort(ord.rbegin(), ord.rend());

        vector<long long int> sum(n);
        sum[n-1] = ord[n-1];
        for (int i = n-2; i >= 0; i--){
            sum[i] = sum[i+1]+ord[i];
        }
        
        m[ord[0]] = n-1;

        for (int i = 1; i < n; i++){
            if(sum[i] >= ord[i-1]){
                m[ord[i]] = m[ord[i-1]];
            }else{
                m[ord[i]] = n-i-1;
            }
        }
        
        
        for (int i = 0; i < n; i++){
            cout << m[v[i]] << " ";
        }
        cout << "\n";

    }
}