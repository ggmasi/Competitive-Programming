//https://codeforces.com/problemset/problem/1472/C
#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5+5;

int n;

int dp[MAX];
int v[MAX];


int calc(int a){
    if(a >= n) return 0;
    if(dp[a] != 0) return dp[a];
    dp[a] = v[a] + calc(a+v[a]);
    return dp[a];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        cin >> n;
        
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int maior = 0;
        for (int i = 0; i < n; i++){
            int x = calc(i);
            if(x > maior) maior = x;
        }
        cout << maior << endl;
        
    }
}