//https://codeforces.com/contest/143/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1, r2, c1, c2, d1, d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int x1, x2, x3, x4;
    if((c1-r1+d2)%2){
        cout << -1 << "\n";
        return 0;
    }
    x3 = (c1-r1+d2)/2;
    x1 = c1-x3;
    x2 = d2-x3;
    x4 = r2-x3;

    if(x1 > 9 || x1 < 1 || x2 > 9 || x2 < 1 || x3 > 9 || x3 < 1 || x4 > 9 || x4 < 1 ||
       x1 == x2 || x1 == x3 || x1 == x4 || x2 == x3 || x2 == x4 || x3 == x4 ||
       r1 != x1+x2 || r2 != x3+x4 || c1 != x1+x3 || c2 != x2+x4 || d1 != x1+x4 || d2 != x2+x3){
        cout << -1 << "\n";
    }else{
        cout << x1 << " " << x2 << "\n" << x3 << " " << x4 << "\n";
    }
}