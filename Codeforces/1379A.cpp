// url: https://codeforces.com/problemset/problem/1379/A
// Title: Acacius and String
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>


vector<int> build_pi(const string& p){
    int m = p.size();
    vector<int> pi(m);
    for (int i = 1, j = 0; i < m; i++){
        while(j > 0 && p[i] != p[j]){
            j = pi[j-1];
        }
        if(p[i] == p[j]) j++;
        pi[i] = j;
    }
    return pi;
}

vector<int> kmp(string& t, string& p){
    int n = t.size(), m = p.size();
    vector<int> res;

    if(m == 0) return res;

    vector<int> pi = build_pi(p);

    for(int i = 0, j = 0; i < n; i++){ 
        while(j > 0 && t[i] != p[j]){
            j = pi[j-1];
        }
        if(t[i] == p[j]) j++;
        if(j == m){
            res.push_back(i-m+1);
            j = pi[j-1];
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s = "abacaba";
        string r; cin >> r;
        bool achou = false;
        for (int i = 0; i <= r.length()-7; i++){
            bool flag = true;
            for (int j = 0; j < 7; j++){
                if(r[i+j] != s[j] && r[i+j] != '?'){
                    flag = false;
                    break;
                }
            }

            if(flag){
                string temp = r;

                for (int j = i; j < i+7; j++){
                    temp[j] = s[j-i];
                }
                
                for (int j = 0; j < temp.length(); j++){
                    if(temp[j] == '?') temp[j] = 'z';
                }
                vector<int> v = kmp(temp, s);

                if(v.size() == 1){
                    cout << "Yes\n" << temp << "\n";
                    achou = true;
                    break;
                }
            }
            
        }
        

        if(!achou){
            cout << "No\n";
        }

    }
    
    return 0;
}