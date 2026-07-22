//https://codeforces.com/contest/365/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int k; cin >> k;
    int sum = 0;
    while(n--){
        string s; cin >> s;
        set<char> c;
        for(auto x : s){
            if(x-48 <= k) c.insert(x);
        }

        if(c.size() == k+1) sum++;
    }

    cout << sum << endl;
}