//https://judge.beecrowd.com/pt/problems/view/1234
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        bool troca = 0;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == ' ') continue;
        
            if(troca == 0){
                if(s[i] >= 'a' && s[i] <= 'z'){
                    s[i] = toupper(s[i]);
                }
                troca = 1;
            }else{
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] = tolower(s[i]);
                }
                troca = 0;
            }
        }
        
        cout << s << endl;
    }
}