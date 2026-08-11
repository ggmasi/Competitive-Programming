// url: https://codeforces.com/contest/296/problem/C
// Title: Greg and Array
#include <bits/stdc++.h>
using namespace std;

struct Operation{
    int l, r, d;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;

    vector<long long> inicial(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> inicial[i];
    }
    
    vector<Operation> ops(m+1);

    for (int i = 1; i <= m; i++){
        cin >> ops[i].l >> ops[i].r >> ops[i].d;
    }

    vector<long long> diff_ops(m+2, 0);
    for (int i = 1; i <= k; i++){
        int x, y; cin >> x >> y;
        diff_ops[x]++;
        diff_ops[y+1]--;
    }
    
    vector<long long> times(m+1, 0);
    long long sum = 0;
    for (int i = 1; i <= m; i++){
        sum += diff_ops[i];
        times[i] = sum;
    }

    vector<long long> diff(n+2, 0);
    for (int i = 1; i <= m; i++){
        if(times[i] > 0){
            diff[ops[i].l] += ops[i].d*times[i];
            diff[ops[i].r+1] -= ops[i].d*times[i];
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++){
        ans += diff[i];
        cout << inicial[i]+ans << " "; 
    }
    
    cout << "\n";
    
    return 0;
}