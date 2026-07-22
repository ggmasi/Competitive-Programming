//https://codeforces.com/contest/766/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    if(a == b){
        cout << -1 << endl;
        return 0;
    }else{
        cout << max(a.length(), b.length());
    }
    return 0;
}