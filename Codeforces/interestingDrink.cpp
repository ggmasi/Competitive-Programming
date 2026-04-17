//https://codeforces.com/problemset/problem/706/B/
#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1e5+5;
 
int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    int freq[MAX];
    int dp[MAX];
    memset(freq, 0, sizeof(freq));
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin >> p[i];
        freq[p[i]]++;
    }
    dp[0] = 0;
    for (int i = 1; i <= 1e5; i++){
        dp[i] = dp[i-1]+freq[i];
    }
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int temp;
        cin >> temp;
        if(temp > 1e5){
            cout << n << endl;
        }else cout << dp[temp] << endl;
        
    }
    return 0;
}