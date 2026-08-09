// url: https://codeforces.com/contest/1009/problem/B
// Title: Minimum Ternary String
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a; cin >> a;
    string count;
    string s;
    
    for(auto c : a){
        if(c == '1') count.push_back('1');
        else s.push_back(c);
    }
    
    bool flag = false;
    string ans;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == '2' && !flag){
            ans.append(count);
            flag = true;
        }
        ans.push_back(s[i]);
    }
    
    if(!flag){
        ans.append(count);
    }
    
    cout << ans << "\n";
}