//https://judge.beecrowd.com/pt/problems/view/2815
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    string pal;
    bool flag = false;
    while(ss >> pal){
        if(flag){
            cout << " ";
        }else{
            flag = true;
        }

        if(pal.length() < 4) {
            cout << pal;
            continue;
        }
        
        if(tolower(pal[0]) == tolower(pal[2]) && tolower(pal[1]) == tolower(pal[3])){
            pal.erase(2, 2);
        }

        cout << pal;
    }
    cout << endl;
}