// url: https://codeforces.com/gym/106636/problem/K
// Title: Turnstile
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<int> v(10, 0);
        
        if(s.length() > 10){
            cout << "-1\n";
            continue;
        }

        long long int inicial = stoll(s);
        long long int limite = 9876543210;
        if(inicial > limite){
            cout << "-1\n";
            continue;
        }
        
        
        bool flag = false;
        int idx = 0;
        for (int i = 0; i < s.length(); i++){
            if(!v[s[i]-'0']) v[s[i]-'0']++;
            else{    
                v[s[i]-'0']++;
                flag = true;
                idx = i;
                break;
            }
        }
        
        if(flag){
            while(idx >= 0){
                int add = 1;
                char c = s[idx];
                
                while(add+c <= '9'){
                    if(!v[s[idx]+add-'0']){
                        v[s[idx]-'0']--;
                        s[idx] = s[idx]+add;
                        v[s[idx]-'0']++;
                        flag = false;
                        break;
                    }
                    add++;
                }
                
                if(!flag){
                    break;
                }
                
                v[s[idx]-'0']--;
                idx--;
            }
            
            if(idx < 0){
                s = '1'+s;
                v[1] = 1;
                idx = 0;
            }
            
            char menor = '0';
            for (int i = idx+1; i < s.length(); i++){
                while(v[menor-'0']){
                    menor++;
                }
                s[i] = menor;
                menor++;
            }

        }
        // cout << s << "\n";
        long long int ans = stoll(s);
        cout << ans-inicial << endl;
    }


    return 0;
}