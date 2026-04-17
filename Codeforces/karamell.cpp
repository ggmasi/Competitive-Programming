//https://codeforces.com/gym/105327/problem/K
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    if(sum%2 == 1){
        cout << -1 << "\n";
        return 0;
    }
    
    vector<vector<int>> dp(n+1, vector<int>((sum/2)+1, 0));
    for (int i = 0; i <= n; i++){
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= sum/2; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= v[i-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-v[i-1]]);
            }
        }
    }

    if(dp[n][sum/2] == 0){
        cout << -1 << "\n";
        return 0;
    }
    
    
    queue<int> a;
    queue<int> b;
    int i = n, j = sum/2;
    while(i > 0){
        if(dp[i-1][j]){
            b.push(v[i-1]);
            i--;
        }else{
            a.push(v[i-1]);
            j -= v[i-1];
            i--;
        }
    }
    
    int sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++){
        if(sumA <= sumB){
            cout << a.front() << " ";
            sumA += a.front();
            a.pop();
        }else{
            cout << b.front() << " ";
            sumB += b.front();
            b.pop();
        }
    }
    cout << "\n";
    return 0;

}