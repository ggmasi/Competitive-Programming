// url: https://codeforces.com/contest/227/problem/C
// Title: Flying Saucer Segments
#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, m; cin >> n >> m;

    long long res = binpow(3, n, m)+m-1;

    cout << res%m << "\n";
    
    return 0;
}