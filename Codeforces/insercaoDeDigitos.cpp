//https://codeforces.com/gym/106598/problem/I
#include <bits/stdc++.h>
using namespace std;

set<string> conjunto;

void solve(string atual, string proxs){
    
    if(atual.length() == 11 && proxs.length() == 0){
        if(atual[0] == '1' && atual[2] == '9' && atual[1] != '0'){
            conjunto.insert(atual);
            return;
        }
    }

    // cout << endl << endl;
    // cout << atual.length() << " " << proxs.length();
    // cout << endl << endl;

    if(atual.length() == 0){
        if(proxs.length() < 11){
            solve("1", proxs);
        }
        if(proxs.length() > 0 && proxs[0] == '1'){
            string temp = proxs;
            temp.erase(temp.begin());
            solve(atual+'1', temp);
        }
    }else if(atual.length() == 2){
        if(proxs.length() < 9){
            solve(atual+"9", proxs);
        }
        if(proxs.length() > 0 && proxs[0] == '9'){
            string temp = proxs;
            temp.erase(temp.begin());
            solve(atual+'9', temp);
        }
    }else if(atual.length() == 1){
        if(atual.length() + proxs.length() < 11){
            solve(atual+"1", proxs);
            solve(atual+"9", proxs);
        }

        if(proxs.length() > 0 && proxs[0] != '0'){
            string temp = proxs;
            temp.erase(temp.begin());
            solve(atual+proxs[0], temp);
        }
    }else{
        if(atual.length() + proxs.length() < 11){
            solve(atual+"1", proxs);
            solve(atual+"9", proxs);
        }

        if(proxs.length() > 0){
            string temp = proxs;
            temp.erase(temp.begin());
            solve(atual+proxs[0], temp);
        }
        
    }

}

int main(){
    string s; cin >> s;

    if(s.length() > 11){
        cout << 0 << endl;
        return 0;
    }else if(s.length() == 11){
        if(s[0] == '1' && s[1] != '0' && s[2] == '9'){
            cout << 1 << endl << s << endl;
            return 0;
        }
    }
    solve("", s);

    cout << conjunto.size() << endl;
    for(auto x : conjunto){
        cout << x << endl;
    }

}