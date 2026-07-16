//https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(4);
    for (int i = 0; i < 4; i++){
        cin >> v[i];
    }
    
    string s; cin >> s;
    int sum = 0;
    for(auto x : s){
        sum += v[x-49];
    }

    cout << sum << endl;
}