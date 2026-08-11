// url: https://codeforces.com/contest/88/problem/C
// Title: Trains
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b; cin >> a >> b;

    int mdc = gcd(a, b);

    if(abs(a/mdc-b/mdc) == 1){
        cout << "Equal\n";
    }else if(a < b){
        cout << "Dasha\n";
    }else cout << "Masha\n";
    
    return 0;
}