//https://codeforces.com/contest/1/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, m, a; cin >> n >> m >> a;
    long long int res = ceil((n/a))*ceil((m/a));
    cout << res << endl;
}