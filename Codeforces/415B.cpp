// url: https://codeforces.com/contest/415/problem/B
// Title: Mashmokh And Tokens
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++){
        long long int mult; cin >> mult;
        mult *= a;
        cout << (mult%b)/a << " ";
    }

    return 0;
    
}