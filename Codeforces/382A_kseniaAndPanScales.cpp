//https://codeforces.com/contest/382/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string a; cin >> a;

    string esq, dir;
    bool flag = false;
    for(auto x : s){
        if(x == '|'){
            flag = true;
            continue;
        }
        if(flag){
            dir.push_back(x);
        }else{
            esq.push_back(x);
        }
    }
    int dif = esq.length()-dir.length();
    if(abs(dif)%2 != a.length()%2 || esq.length()+a.length() < dir.length() || dir.length()+a.length() < esq.length()){
        cout << "Impossible\n";
        return 0;
    }else{
        int idx = 0;
        while(esq.length() < dir.length()){
            esq.push_back(a[idx]);
            idx++;
        }
    
        while(esq.length() > dir.length()){
            dir.push_back(a[idx]);
            idx++;
        }

        while(idx < a.length()){
            esq.push_back(a[idx]);
            dir.push_back(a[idx+1]);
            idx+=2;
        }
    }

    cout << esq+'|'+dir+"\n";
}