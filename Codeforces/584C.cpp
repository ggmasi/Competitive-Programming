// url: https://codeforces.com/contest/584/problem/C
// Title: Marina and Vasya
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t; cin >> n >> t;
    string s1, s2; cin >> s1 >> s2;

    int k = n-t;

    int igual = 0, dif = 0;
    for (int i = 0; i < n; i++){
        if(s1[i] == s2[i]) igual++;
        else dif++;
    }

    if(igual+dif/2 < k){
        cout << "-1\n";
        return 0;
    }
    
    int same = min(igual, k);
    int diff = k-same;

    int matchediguais = 0;
    int matcheds1 = 0;
    int matcheds2 = 0;

    string ans = "";

    for (int i = 0; i < n; i++){
        if(s1[i] == s2[i]){
            if(matchediguais < same){
                ans += s1[i];
                matchediguais++;
            }else{
                char c = 'a';
                while(c == s1[i] || c == s2[i]) c++;
                ans += c;
            }
        }else{
            if(matcheds1 < diff){
                ans += s1[i];
                matcheds1++;
            }else if(matcheds2 < diff){
                ans += s2[i];
                matcheds2++;
            }else{
                char c = 'a';
                while(c == s1[i] || c == s2[i]) c++;
                ans += c;
            }
        }
    }
    
    cout << ans << "\n";
    return 0;
}