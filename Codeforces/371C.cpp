// url: https://codeforces.com/contest/371/problem/C
// Title: Hamburgers
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    ll nb, ns, nc; cin >> nb >> ns >> nc;
    ll pb, ps, pc; cin >> pb >> ps >> pc;
    ll dinheiro; cin >> dinheiro;
    ll numB = 0, numS = 0,  numC = 0;
    
    for(auto c : s){
        if(c == 'B') numB++;
        if(c == 'S') numS++;
        if(c == 'C') numC++;
    }
    long long int ans = 0;
    while(1){
        if((numB <= 0 || nb <= 0) && (numS <= 0 || ns <= 0) && (numC <= 0 || nc <= 0)){
            ans += dinheiro/((pb*numB)+(ps*numS)+(pc*numC));
            break;
        }

        ll custo = (pb*(max(0LL, numB-nb)))+(ps*(max(0LL, numS-ns)))+(pc*(max(0LL, numC-nc)));

        if(dinheiro >= custo){
            dinheiro -= custo;
            ans++;

            nb = max(0LL, nb-numB);
            ns = max(0LL, ns-numS);
            nc = max(0LL, nc-numC);
        }else break;

    
    }

    cout << ans << "\n";



    return 0;
}