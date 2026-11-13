// url: 
// Title: 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){ 
        int n, k;
        cin >> n >> k;
        
        int grundy_xor = 0;
        for (int i = 1; i <= n; ++i) {
            ll a;
            cin >> a;
            if (i%(k + 1) == 1) {
                grundy_xor ^= (a & 1);
            }
        }
        
        if (grundy_xor != 0) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
    return 0;
}