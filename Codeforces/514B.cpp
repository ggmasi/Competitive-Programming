//https://codeforces.com/contest/514/problem/B
// Han Solo And Lazer Gun
#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, x, y; cin >> n >> x >> y;
    set<double> m;
    int inf = 0;
    for (int i = 0; i < n; i++){
        double xi, yi; cin >> xi >> yi;
        
        if(xi-x == 0){
            inf++;
        }else{
            double coef = (yi-y)/(xi-x);
            m.insert(coef);
        }
    }
    int ans = inf > 0 ? m.size()+1 : m.size();
    cout << ans << "\n";
}