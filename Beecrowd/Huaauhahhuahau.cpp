//https://judge.beecrowd.com/pt/problems/view/2242
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    string v = "";

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            v.push_back(s[i]);
            cnt++;
        }
    }


    string aux = v;
    reverse(v.begin(), v.end());
    if(v == aux){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    
    
}