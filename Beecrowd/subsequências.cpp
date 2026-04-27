//https://judge.beecrowd.com/pt/problems/view/1507
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n; cin >> n;
        while(n--){
            string s2; cin >> s2;
            int tam = 0;
            int i = 0;
            while(tam != s2.length() && i < s.length()){
                if(s2[tam] == s[i]){
                    tam++;
                }
                i++;
            }

            if(tam == s2.length()){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
}