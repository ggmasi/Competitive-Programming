// url: https://codeforces.com/problemset/problem/617/A
// Title: Elephant
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x; cin >> x;

    int ans = 1;
    while(x > 5){
        x -= 5;
        ans++;
    }

    cout << ans << "\n";
    
    return 0;
}