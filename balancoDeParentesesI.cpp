#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int a = 0; 
        int f = 0;
        bool b = true;
        for (int i = 0; i < s.length(); i++){
            if(f > a){
                cout << "incorrect" << endl;
                b = false;
                break; 
            }
            if(s[i] == '(') a++;
            else if(s[i] == ')') f++;
        }
        if(b){
            if(a == f){
                cout << "correct" << endl;
            }else{
                cout << "incorrect" << endl;
            }

        }
    }
    return 0;
}