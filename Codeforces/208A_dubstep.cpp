//https://codeforces.com/contest/208/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string aux = "";
    string res = "";
    for (int i = 0; i < s.length(); i++){
        aux.push_back(s[i]);
        if(aux.length() >= 3 && aux[aux.length()-1] == 'B' && aux[aux.length()-2] == 'U' && aux[aux.length()-3] == 'W'){
            aux.pop_back();
            aux.pop_back();
            aux.pop_back();
            if(res.length() != 0 && aux.length() != 0){
                // cout << aux << endl;
                res = res+" ";
            } 
            res = res+aux;            
            aux = "";
        }        
    }
    
    if(res.length() != 0 && aux.length() != 0){
        // cout << aux << endl;
        res = res+" ";
    } 
    res = res+aux;

    cout << res << endl;
    
}