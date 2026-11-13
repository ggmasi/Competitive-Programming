// url: https://codeforces.com/problemset/problem/940/D 
// Title: Alena And The Heater
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    vector<int> menor(n, 0);
    vector<int> maior(n, 0);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        menor[i] = v[i];
        maior[i] = v[i];
        if(i > 3){
            for (int j = 0; j < 4; j++){
                menor[i] = min(menor[i], v[i-j-1]);
                maior[i] = max(maior[i], v[i-j-1]);
            }
        }
    }
    string s; cin >> s;
    bool one = true;
    int l = -1e9-5, r = 1e9+5;

    
    for (int i = 4; i < n; i++){
        if(s[i] == '1' && one){
            one = false;
            l = max(l, maior[i]+1);
        }

        if(s[i] == '0' && !one){
            one = true;
            r = min(r, menor[i]-1);
        }
    }

    if(r == 1e9+5) r = 1e9;
    if(l == -1e9-5) l = -1e9;
    
    cout << l << " " << r << "\n"; 
    
    
    
    return 0;
}