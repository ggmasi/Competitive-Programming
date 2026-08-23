// url: https://codeforces.com/contest/604/problem/C
// Title: Alternative Thinking
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    string s; cin >> s;

    char last = s[0];
    int maior = 1;
    int pares = 0;

    for (int i = 1; i < n; i++){
        if(s[i] == s[i-1]) pares++;
        if(s[i] != last) maior++;
        last = s[i];
    }
    
    if(pares >= 2) maior += 2;
    else if(pares == 1) maior++;

    cout << maior << "\n";

    return 0;
}