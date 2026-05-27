//https://cses.fi/problemset/task/2220
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[20][11][2][2];
string limit_str;

ll solve(int pos, int last, bool is_less, bool is_started){
    if(pos == limit_str.length()){
        return 1;
    }

    if(dp[pos][last][is_less][is_started] != -1){
        return dp[pos][last][is_less][is_started];
    }

    int limit_digit = is_less ? 9 : (limit_str[pos] - '0');
    ll total_valid_numbers = 0;

    for (int i = 0; i <= limit_digit; i++){
        if(is_started && i == last) continue;

        bool next_is_less = is_less || i < limit_digit;
        bool next_is_started = is_started || i != 0;
        int next_last = next_is_started ? i : 10;

        total_valid_numbers += solve(pos+1, next_last, next_is_less, next_is_started);
    }

    return dp[pos][last][is_less][is_started] = total_valid_numbers;
    
}

int main(){
    ll a, b; cin >> a >> b;

    limit_str = to_string(a-1);
    memset(dp, -1, sizeof(dp));
    ll cntA = solve(0, 10, false, false);


    limit_str = to_string(b);
    memset(dp, -1, sizeof(dp));
    ll cntB = solve(0, 10, false, false);

    cout << cntB-cntA << endl;
}