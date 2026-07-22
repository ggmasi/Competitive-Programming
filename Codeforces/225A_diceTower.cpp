//https://codeforces.com/contest/225/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int top; cin >> top;
    int top2 = 7-top;
    bool flag = true;
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        if(a == top || a == top2 || b == top || b == top2 || a+b == 7){
            flag = false;
        }
    }

    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    
}