// url: https://codeforces.com/contest/518/problem/B
// Title: Tanya and Postcard
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t; cin >> s >> t;
    map<char, int> m;

    vector<char> lower;
    vector<char> upper;

    for(auto c : s){
        m[c]++;
    }

    for(auto c : t){
        if(c >= 'A' && c <= 'Z') upper.push_back(c);
        else lower.push_back(c);
    }

    int a = 0, b = 0;

    for(int i = 0; i < lower.size(); i++){
        if(m.contains(lower[i]) && m[lower[i]] > 0){
            m[lower[i]]--;
            a++;
            lower[i] = '#';
        }
    }

    for(int i = 0; i < upper.size(); i++){
        if(m.contains(upper[i]) && m[upper[i]] > 0){
            m[upper[i]]--;
            a++;
            upper[i] = '#';
        }
    }

    for(int i = 0; i < lower.size(); i++){
        if(lower[i] == '#') continue;
        char other = toupper(lower[i]);
        if(m.contains(other) && m[other] > 0){
            m[other]--;
            b++;
            lower[i] = '#';
        }
    }


    
    for(int i = 0; i < upper.size(); i++){
        if(upper[i] == '#') continue;
        char other = tolower(upper[i]);
        // cout << other << endl;
        if(m.contains(other) && m[other] > 0){
            m[other]--;
            b++;
            upper[i] = '#';
        }
    }


    cout << a << " " << b << "\n";

    return 0;
}