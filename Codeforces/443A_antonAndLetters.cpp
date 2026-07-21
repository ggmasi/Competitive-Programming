//https://codeforces.com/contest/443/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<char> c;
    for(auto x : s){
        if(x >= 'a' && x <= 'z') c.insert(x);
    }

    cout << c.size() << endl;
}