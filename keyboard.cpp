//https://codeforces.com/problemset/problem/474/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char c;
    cin >> c;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        int t = s1.find(s[i]);
        if(c == 'R') cout << s1[t-1];
        else cout << s1[t+1];
    }
    
}