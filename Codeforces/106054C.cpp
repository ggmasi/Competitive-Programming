// url: https://codeforces.com/gym/106054/problem/C
// Title: Circularly
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> freq(n, 0);
    ll ans = n;

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        temp--;
        freq[(i+temp)%n]++;
    }

    for(auto x : freq){
        ans += (ll)x*(x-1);
    }
    
    cout << ans << "\n";
    return 0;
}