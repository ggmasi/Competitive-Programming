// url: https://codeforces.com/problemset/problem/1242/A
// Title: Tile Painting
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    if(n == 1){
        cout << 1 << "\n";
        return 0;
    }
    
    for (ll i = 2; i*i <= n; i++){
        if(n%i == 0){
            while(n%i == 0){
                n/= i;
            }
    
            if(n > 1){
               cout << "1\n";     
            }else{
                cout << i << "\n";
            }
            return 0;
        }
    }
    
    cout << n << "\n";


    
    return 0;
}