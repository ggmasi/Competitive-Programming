#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;
const int INF = INT32_MAX;


int n;
vector<int> heights;
int dp[MAX];



int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        dp[i] = INF;
    }
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        heights.push_back(x);
    }
    dp[0] = 0;

    for (int i = 1; i < n; i++){
        dp[i] = min(dp[i], dp[i-1] + abs(heights[i]-heights[i-1]));
        if(i > 1) dp[i] = min(dp[i], dp[i-2] + abs(heights[i]-heights[i-2]));
    }

    cout << dp[n-1] << endl;
    
}