//https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    int u = 0, l = 0;
    for (auto x : s){
        if(x >= 'A' && x <= 'Z') u++;
        else l++;
    }

    if(u > l){
        for(auto &x : s){
            x = toupper(x);
        }
    }else{
        for(auto &x : s){
            x = tolower(x);
        }
    }

    cout << s << endl;
    
}