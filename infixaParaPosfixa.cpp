#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    stack<char> pilha;
    
    while(t--){
        string s; cin >> s;
        
        for (int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                pilha.push(s[i]);
            }else if(s[i] == ')'){
                char temp = pilha.top();
                pilha.pop();
                while(temp != '('){
                    cout << temp;
                }
            }else if(s[i] == '^'){
                pilha.push(s[i]);
            }else if(s[i] == '*' || s[i] == '/'){
                if(pilha.top() == '+' || pilha.top() == '-' || pilha.top() == '(' || pilha.empty()){
                    pilha.push(s[i]);
                }else{
                    while(pilha.top() != '+' && pilha.top() != '-' && pilha.top() != '(' && !pilha.empty()){
                        char temp = pilha.top();
                        pilha.pop();
                        cout << temp;
                    }

                    pilha.push(s[i]);
                }
            }else if(s[i] == '+' || s[i] == '-'){
                if(pilha.top() == '(' || pilha.empty()){
                    pilha.push(s[i]);
                }else{
                    while(pilha.top() != '(' && !pilha.empty()){
                        char temp = pilha.top();
                        pilha.pop();
                        cout << temp;
                    }
                    pilha.push(s[i]);
                }
            }else{
                cout << s[i];
            }
        }
        while(!pilha.empty()){
            cout << pilha.top();
            pilha.pop();
        }
        cout << endl;
    }
}