// url: https://codeforces.com/group/YgJmumGtHD/contest/105936/problem/D
// Title: Dados
#include <bits/stdc++.h>
using namespace std;

int main(){
    double k; cin >> k;

    double ans = 0;
    for (int i = 1; i <= 6; i++){
        for (int j = 1; j <= 6; j++){
            for (int l = 1; l <= 6; l++){
                if(i+l+j == k) ans++;
            }
        }
    }
    
    ans = ans/216;
    cout << fixed << setprecision(12) << ans << "\n";
    return 0;

}