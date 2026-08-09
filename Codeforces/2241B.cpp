// url: https://codeforces.com/contest/2241/problem/B
// Title: Good Times Good Times
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    while(n--){
        string x; cin >> x;
        long long int ans = 1;
        for (int i = 0; i < x.length(); i++){
            ans *= 10;
        }
        ans += 1;
        cout << ans << endl;
    }
}
