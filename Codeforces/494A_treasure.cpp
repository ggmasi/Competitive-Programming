//https://codeforces.com/problemset/problem/494/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    int open_cnt = 0, close_cnt = 0, hash_cnt = 0;
    
    for (char c : s) {
        if (c == '(') open_cnt++;
        else if (c == ')') close_cnt++;
        else hash_cnt++;
    }

    int needed = open_cnt - close_cnt;
    if (needed < hash_cnt) {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> ans(hash_cnt, 1);
    ans[hash_cnt-1] = needed - (hash_cnt - 1);

    int curr_open = 0, curr_close = 0;
    int hash_idx = 0;
    
    for (char c : s) {
        if (c == '(') {
            curr_open++;
        } else if (c == ')') {
            curr_close++;
        } else {
            curr_close += ans[hash_idx];
            hash_idx++;
        }

        if (curr_close > curr_open) {
            cout << -1 << "\n";
            return 0;
        }
    }

    for (int x : ans) {
        cout << x << "\n";
    }

    return 0;
    
}