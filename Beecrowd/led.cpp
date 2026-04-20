//https://judge.beecrowd.com/pt/problems/view/1168
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<char, int> m;
    m['1'] = 2;
    m['2'] = 5;
    m['3'] = 5;
    m['4'] = 4;
    m['5'] = 5;
    m['6'] = 6;
    m['7'] = 3;
    m['8'] = 7;
    m['9'] = m['0'] = 6;
    while(n--){
        string s; cin >> s;
        int sum = 0;
        for (int i = 0; i < s.length(); i++){
            sum += m[s[i]];
        }
        cout << sum << " leds\n";
    }
    return 0;
}