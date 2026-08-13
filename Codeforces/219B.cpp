// url: https://codeforces.com/contest/219/problem/B
// Title: Special Offer! Super Price 999 Bourles!
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long p, d; cin >> p >> d;

    long long maior = p;
    long long mult = 10;
    long long div = 1;
    while(1){
        if(maior%mult == maior){
            cout << maior << "\n";
            return 0;
        }
        int dig = (maior%mult)/div;
        if(dig == 9){
            mult *= 10;
            div *= 10;
        }else{
            if(maior-(dig+1)*div >= p-d){
                maior -= (dig+1)*div;
                mult *= 10;
                div *= 10;
            }else{
                cout << maior << "\n";
                return 0;
            }
        }
    }
    
    return 0;
}