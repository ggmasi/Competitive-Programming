//https://codeforces.com/contest/514/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    bool flag = true;
    char x;
    while(cin >> x){
        if(x < '0' || x > '9') break;
        if(x == '5') cout << '4'; 
        else if(x == '6') cout << '3';
        else if(x == '7') cout << '2';
        else if(x == '8') cout << '1';
        else if(x == '9' && !flag) cout << '0';
        else cout << x;
        flag = false;
    }

    cout << "\n";
    return 0;
}