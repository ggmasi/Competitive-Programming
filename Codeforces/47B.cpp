//https://codeforces.com/contest/47/problem/B
// Coins
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> a = {-1, -1}, b = {-1, -1}, c = {-1, -1};
    for (int i = 0; i < 3; i++){
        string s; cin >> s;
        if(s[0] == 'A'){
            if(s[2] == 'B'){
                if(s[1] == '>'){
                    a.first = 1;
                    b.first = 0;
                }else{
                    b.first = 1;
                    a.first = 0;
                }
            }else if(s[2] == 'C'){
                if(s[1] == '>'){
                    a.second = 1;
                    c.first = 0;
                }else{
                    c.first = 1;
                    a.second = 0;
                }
            }
        }else if(s[0] == 'B'){
            if(s[2] == 'A'){
                if(s[1] == '<'){
                    a.first = 1;
                    b.first = 0;
                }else{
                    b.first = 1;
                    a.first = 0;
                }
            }else if(s[2] == 'C'){
                if(s[1] == '>'){
                    b.second = 1;
                    c.second = 0;
                }else{
                    c.second = 1;
                    b.second = 0;
                }
            }
        }else if(s[0] == 'C'){
            if(s[2] == 'A'){
                if(s[1] == '>'){
                    a.second = 0;
                    c.first = 1;
                }else{
                    c.first = 0;
                    a.first = 1;
                }
            }else if(s[2] == 'B'){
                if(s[1] == '>'){
                    b.second = 0;
                    c.second = 1;
                }else{
                    c.second = 0;
                    b.second = 1;
                }
            }
        }
    }
    
    bool menor = false, meio = false, maior = false;
    char m1, m2, m3;

    if(a.first == 0 && a.second == 0){
        menor = true;
        m1 = 'A';
    } 
    else if((a.first == 0 && a.second == 1) || (a.first == 1 && a.second == 0)){
        meio = true;
        m2 = 'A';
    } 
    else{
        maior = true;
        m3 = 'A';
    } 

    if(b.first == 0 && b.second == 0){
        if(menor){
            cout << "Impossible\n";
            return 0;
        }
        m1 = 'B';
        menor = true;
    } 
    else if((b.first == 0 && b.second == 1) || (b.first == 1 && b.second == 0)){
        if(meio){
            cout << "Impossible\n";
            return 0;
        }
        m2 = 'B';
        meio = true;
    } 
    else{
        if(maior){
            cout << "Impossible\n";
            return 0;
        }
        m3 = 'B';
        maior = true;
    } 

    

    if(c.first == 0 && c.second == 0){
        if(menor){
            cout << "Impossible\n";
            return 0;
        }
        m1 = 'C';
        menor = true;
    } 
    else if((c.first == 0 && c.second == 1) || (c.first == 1 && c.second == 0)){
        if(meio){
            cout << "Impossible\n";
            return 0;
        }
        m2 = 'C';
        meio = true;
    } 
    else{
        if(maior){
            cout << "Impossible\n";
            return 0;
        }
        m3 = 'C';
        maior = true;
    } 

    if(menor && meio && maior){
        cout << m1 << m2 << m3 << "\n";
    }else{
        cout << "Impossible\n";
    }

    return 0;
}