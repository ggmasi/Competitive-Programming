//https://judge.beecrowd.com/pt/problems/view/1708
#include <bits/stdc++.h>
using namespace std;

int main(){
    double x, y; cin >> x >> y;

    // int cnt = (y/(y-x));
    double cntD = ((y/(y-x)));

    double cnt = ceil(cntD);

    cout << cnt << endl;
}