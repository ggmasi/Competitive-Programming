//https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int x = max(a, b);

    if(x == 1) cout << "1/1\n";
    else if(x == 2) cout << "5/6\n";
    else if(x == 3) cout << "2/3\n";
    else if(x == 4) cout << "1/2\n";
    else if(x == 5) cout << "1/3\n";
    else cout << "1/6\n"; 
}