//https://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
   
    for (auto &x : a){
        x = tolower(x);
    }
    
    for (auto &x : b){
        x = tolower(x);
    }


    if(a > b) cout << "1\n";
    else if(a < b) cout << "-1\n";
    else cout << "0\n";
    return 0;
}