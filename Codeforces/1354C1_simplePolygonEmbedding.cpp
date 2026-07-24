//https://codeforces.com/problemset/problem/1354/C1
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a = M_PI;
    int t; cin >> t;
    while(t--){
        double n; cin >> n;
    
        double ans = 1/tan(a/(2*n));
    
        cout << fixed << setprecision(9) << ans << "\n";
    }
}