//https://codeforces.com/contest/520/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<char> s;
    for (int i = 0; i < n; i++){
        char temp; cin >> temp;
        temp = tolower(temp);
        s.insert(temp);
    }
    
    if(s.size() == 26){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}