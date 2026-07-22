//https://codeforces.com/contest/707/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    bool flag = false;
    for (int i = 0; i < n*m; i++){
        char temp; cin >> temp;
        if(temp == 'C' || temp == 'M' || temp == 'Y') flag = true;
    }
    

    if(flag) cout << "#Color\n";
    else cout << "#Black&White\n";
    return 0;
}