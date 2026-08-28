// url: https://codeforces.com/gym/106667/problem/L
// Title: Lampions League
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main(){
    ll n; cin >> n;
    ll sumT = 0, sumL = 0;

    for (int i = 1; i <= n; i++){
        if(i%2) sumT += i;
        else sumL += i;
    }

    if(abs(sumT-sumL)%2){
        cout << "IMPAR\n";
    }else cout << "PAR\n";

    return 0;
    
}