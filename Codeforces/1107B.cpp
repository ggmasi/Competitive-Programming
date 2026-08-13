// url: https://codeforces.com/problemset/problem/1107/B
// Title: Digital root
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    while(n--){
        long long k, x;
        cin >> k >> x;

        cout << ((k-1)*9)+x << "\n";
    }

    return 0;
}