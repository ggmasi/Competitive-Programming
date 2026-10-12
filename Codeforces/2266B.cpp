// url: https://codeforces.com/contest/2266/problem/B
// Title: Three Piles
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    
    while(t--){
        ll a, b, c; cin >> a >> b >> c;

        if(a <= b){
            if(abs(a+c-b) > abs(b-a)){
                cout << abs(a+c-b) << "\n";
            }else{
                cout << abs(b-a) << "\n";
            }
        }else{
            cout << abs(a+c-b) << "\n";
        }
    }


    return 0;
}