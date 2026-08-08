//https://codeforces.com/contest/2248/problem/C
// Maximize The Score
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n+1, 0);
        vector<long long int> dp(2*n+1, 0);

        for (int i = 1; i <= 2*n; i++){
            int temp; cin >> temp;
            if(v[temp] == 0){
                v[temp] = i;
                dp[i] = dp[i-1]+1;
            } 
            else{
                long long tam = i-v[temp]+1;
                dp[i] = max(tam*tam+dp[v[temp]-1], dp[i-1]+1);
            }
        }
        
        cout << dp[2*n] << "\n";
        
    

    
    }
}