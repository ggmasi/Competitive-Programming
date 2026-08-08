//https://codeforces.com/contest/716/problem/B
// Complete The Word
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<int> freq(26, -1);

    if(s.length() < 26){
        cout << -1 << endl;
        return 0;
    }

    int l = 0, r = 0;

    while(r < s.length()){
        // cout << l << " " << r << endl;
        if(r-l == 26){
            int idx = 0;
            for (int i = l; i < r; i++){
                if(s[i] == '?'){
                    while(freq[idx] != -1) idx++;
                    freq[idx] = i;
                    char res = 'A'+idx;
                    s[i] = res; 
                }
            }
            for(int i = 0; i < s.length(); i++){
                if(s[i] == '?'){
                    cout << 'A';
                }else{
                    cout << s[i];
                }
            }
            return 0;
        }

        if(s[r] != '?'){
            int c = s[r]-'A';
            if(freq[c] == -1){
                freq[c] = r;
            }else{
                while(l < freq[c]){
                    if(s[l] != '?'){
                        freq[s[l]-'A'] = -1;
                    }
                    l++;
                }
                freq[c] = r;
                l++;
            }
        }

        r++;
    }

    // for(auto x : freq){
    //     cout << x << " ";
    // }
    // cout << endl;

    if(r-l == 26){
        int idx = 0;
        for (int i = l; i < r; i++){
            if(s[i] == '?'){
                while(freq[idx] != -1) idx++;
                freq[idx] = i;
                char res = 'A'+idx;
                s[i] = res; 
            }
        }

        for(auto x : s){
            if(x == '?'){
                cout << 'A';
            }else{
                cout << x;
            }
        }
    }else{
        cout << -1 << "\n";
    }

    return 0;
}