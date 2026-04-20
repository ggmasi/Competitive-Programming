//https://judge.beecrowd.com/pt/problems/view/1241
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        if(s2.length() > s1.length()){
            cout << "nao encaixa\n";
            continue;
        }
        bool b = true;
        int j = s1.length()-1;
        for (int i = s2.length()-1; i >= 0; i--){
            if(s2[i] == s1[j]){
                j--;
            }else{
                b = false;
                break;
            }
        }
        
        if(b){
            cout << "encaixa\n";
        }else{
            cout << "nao encaixa\n";
        }
    }

    return 0;
}