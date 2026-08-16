// url: https://codeforces.com/gym/106054/problem/A
// Title: Artifact to print
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;

    char atual = 'T';

    for (int i = 0; i < s.length(); i++){
        if(atual == 'T' && s[i] == 'T') atual = 'A';
        else if(atual == 'A' && s[i] == 'A') atual = 'P';
        else if(atual == 'P' && s[i] == 'P'){
            cout << "S\n";
            return 0;
        }
    }
    
    cout << "N\n";


    return 0;
}