//https://codeforces.com/contest/2248/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string res;
        bool a = false, b = false;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == '0' && a == false){
                a = true;
                continue;
            } 
            else if(s[i] == '1' && b == false){
                b = true;
                continue;
            }
            res.push_back(s[i]);
        }
        
        cout << res << "\n";
    }
}