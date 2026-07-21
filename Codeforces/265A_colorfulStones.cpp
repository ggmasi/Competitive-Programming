//https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int c = 0;
    for (int i = 0; i < t.length(); i++){
        if(s[c] == t[i]) c++;
    }
    
    cout << min(c+1, (int)s.length()) << endl;

}