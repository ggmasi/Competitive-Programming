//https://codeforces.com/contest/2225/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        string s; cin >> s;
        int i;
        bool p1 = false, p2 = false, p3 = false;
        for (i = 1; i < s.length(); i++){
            if(s[i] == s[i-1]){
                p1 = true;
                i++;
                break;
            }
        }

        for (i; i < s.length(); i++){
            if(s[i] == s[i-1]){
                p2 = true;
                i++;
                break;
            }
        }
        
        for (i; i < s.length(); i++){
            if(s[i] == s[i-1]){
                p3 = true;
                i++;
                break;
            }
        }
        
        if(!p1 || (p1 && !p2) || (p1 && p2 && !p3)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }


    }
}