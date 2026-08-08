//https://codeforces.com/contest/2254/problem/B
// Evanescent
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int memoria = 0;
        for (int i = 1; i < n-1; i++){
            if((s[i-1] != s[i] && s[i] != s[i+1])){
                if(s[i-1] == s[i+1]){
                    s[i] = s[i-1];
                    break;
                }

                memoria = i;
            }
            

            if(i == n-2){
                if(memoria != 0){
                    s[memoria] = s[memoria-1];
                }else{
                    s[i] = s[i-1];
                }
            }
        }
        
        int ans = 1;
        for (int i = 1; i < n; i++){
            if(s[i] != s[i-1]) ans++;
        }
        
        cout << ans << "\n";
    }
}