//https://codeforces.com/problemset/problem/1915/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int a, b, c; cin >> a >> b >> c;
        int res = a^b;
        res = res^c;
        cout << res << endl;
    }
}