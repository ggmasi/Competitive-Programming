// url: https://codeforces.com/contest/2259/problem/B
// Title: Minus Two
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int impares = 0, paresImpares = 0, paresPares = 0;

        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            if(temp%2){
                impares++;
            }else if(temp%4){
                paresImpares++;
            }else paresPares++;
        }
        
        int ans = max(impares, max(paresImpares, paresPares));

        cout << ans << "\n";
    }

    
    return 0;
}