#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;

int n, p;
vector<int> prices;
vector<int> pages;

int dp[MAX];
int usado[MAX];

int calc(int p){
    if(p <= 0) return 0;
    if(dp[p] != -1) return dp[p];
    for(int i = 0; i < n; i++){
        auto z = prices[i];
        if(z <= p && usado[i] == 0){
            usado[i] = 1;
            dp[p] = max(dp[p], pages[i]+calc(p-z));  
            usado[i] = 0;
        }
    }
    return dp[p];
}

int main(){
    memset(dp, -1, sizeof(dp));
    memset(usado, 0, sizeof(usado));
    cin >> n >> p;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        prices.push_back(x);
    }
    
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        pages.push_back(x);
    }

    cout << calc(p) << endl;
}