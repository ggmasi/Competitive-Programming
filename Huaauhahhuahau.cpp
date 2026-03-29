#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    vector<char> v;

    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            v.push_back(s[i]);
            cnt++;
        }
    }

    
    bool b = true;
    for (int i = 0; i < cnt/2; i++){
        if(v[i] != v[(cnt-1)-i]){
            b = false;
            break;
        }
    }
    if(b){
        cout << 'S' << endl;
    }else{
        cout << 'N' << endl;
    }
    
    
}