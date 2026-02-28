#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int v[s.length()];
    v[0] = 0;
    for (int i = 1; i < s.length(); i++){
        v[i] = v[i-1];
        if(s[i] == s[i-1]){
            v[i]++;
        }
    }
    
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << v[b-1] - v[a-1] << endl;
    }
}