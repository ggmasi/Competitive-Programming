//https://codeforces.com/contest/148/problem/B
// Escape
#include <bits/stdc++.h>
using namespace std;

int main(){
    double vp, vd, t, f, c; cin >> vp >> vd >> t >> f >> c;
    int ans = 0;
    double distAtual = t*vp;
    if(vp >= vd){
        cout << 0 << "\n";
        return 0;
    }

    while(distAtual < c){
        double tempoParaChegar = distAtual/(vd-vp);
        distAtual += tempoParaChegar*vp;

        if(distAtual >= c){
            break;
        }else ans++;

        distAtual += (((distAtual/vd)+f)*vp);
    }
    

    

    cout << ans << "\n";
    return 0;
}