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
                while(temp != '('){
                    pilha.pop();
                    cout << temp;
                    temp = pilha.top();
                }
                pilha.pop();
            }else if(s[i] == '^'){
                pilha.push(s[i]);
            }else if(s[i] == '*' || s[i] == '/'){
                if(pilha.empty() || pilha.top() == '+' || pilha.top() == '-' || pilha.top() == '('){
                    pilha.push(s[i]);
                }else{
                    while(!pilha.empty() && pilha.top() != '+' && pilha.top() != '-' && pilha.top() != '('){
                        char temp = pilha.top();
                        pilha.pop();
                        cout << temp;
                    }

                    pilha.push(s[i]);
                }
            }else if(s[i] == '+' || s[i] == '-'){
                if(pilha.empty() ||pilha.top() == '('){
                    pilha.push(s[i]);
                }else{
                    while(!pilha.empty() && pilha.top() != '('){
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
            if(pilha.top() == '('){
                pilha.pop();
                continue;
            }
            cout << pilha.top();
            pilha.pop();
        }
        cout << endl;
    }
}