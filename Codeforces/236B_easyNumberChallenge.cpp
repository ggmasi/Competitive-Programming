//https://codeforces.com/contest/236/problem/B
#include <bits/stdc++.h>
using namespace std;

vector<long long int> nDiv(1e6+5, 0);
long long int MOD = 1073741824;

void calc(){
    for (int i = 1; i <= 1e6; i++){
        int n = i;
        while(n <= 1e6){
            nDiv[n]++;
            n += i;
        }
    }
    
}

int main(){
    calc();
    int a, b, c; cin >> a >> b >> c;
    
    long long int ans = 0;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            for (int k = 1; k <= c; k++){
                long long int idx = (i*j*k)%MOD;
                ans += nDiv[idx]%MOD;
            }
        }
        
    }
    
    cout << ans << "\n";
}