//https://judge.beecrowd.com/pt/problems/view/1253
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int c; cin >> c;
        for (int i = 0; i < s.length(); i++){
            s[i] = s[i]-c;
            if(s[i] < 'A') s[i] += 26;
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}