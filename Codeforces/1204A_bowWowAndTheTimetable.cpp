//https://codeforces.com/contest/1204/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    if(s.length()%2 == 0){
        cout << s.length()/2 << "\n";
        return 0;
    }else{
        int ans = s.length()/2;
        for (int i = 1; i < s.length(); i++){
            if(s[i] == '1'){
                cout << ans+1 << "\n";
                return 0;
            }
        }

        cout << ans << "\n";
        return 0;
    }
}