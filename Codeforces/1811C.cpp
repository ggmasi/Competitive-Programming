// url: https://codeforces.com/problemset/problem/1811/C
// Title: Restore the Array
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> b(n-1);
        vector<int> res;
        cin >> b[0];
        res.push_back(b[0]);
        bool flag = false;
        for (int i = 1; i <= n-2; i++){
            cin >> b[i];
            if(b[i] == res.back() && flag){
                res.push_back(b[i]);
                continue;
            }

            if(b[i] > res.back() && !flag){
                res.push_back(0);
                flag = true;
            }
            res.push_back(b[i]);
        }

        if(!flag) res.push_back(0);

        for (auto x : res){
            cout << x << " ";
        }
        cout << "\n";
        
    }

    return 0;
}