//https://codeforces.com/problemset/problem/468/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n <= 3){
        cout << "NO\n";
        return 0;
    }

    int idx = 0;
    cout << "YES\n";
    if(n%2 == 0){
        cout << "1 * 2 = 2\n";
        cout << "2 * 3 = 6\n";
        cout << "4 * 6 = 24\n";
        idx = 5;
    }else{
        cout << "3 - 1 = 2\n";
        cout << "2 + 2 = 4\n";
        cout << "5 * 4 = 20\n";
        cout << "20 + 4 = 24\n";
        idx = 6;
    }

    while(idx <= n){
        cout << idx+1 << " - " << idx << " = 1\n";
        cout << "24 * 1 = 24\n";
        idx += 2;
    }
}