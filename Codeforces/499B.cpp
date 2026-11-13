// url: https://codeforces.com/group/mckgAGLrBx/contest/713160/submission/389089639
// Title: Lecture
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    map<string, string> mp;

    for (int i = 0; i < m; i++){
        string s1, s2; cin >> s1 >> s2;
        string menor;
        if(s2.length() < s1.length()){
            menor = s2;
        }else{
            menor = s1;
        }

        mp[s1] = menor;
        mp[s2] = menor;
    }

    for (int i = 0; i < n; i++){
        string s; cin >> s;
        cout << mp[s] << " ";
    }
    
    


    return 0;
}