//https://judge.beecrowd.com/pt/problems/view/1069
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<char> v;
        int sum = 0;
        for (char c : s){
            if(c == '<'){
                v.push_back(c);
            }else if(c == '>'){
                if(!v.empty() && v.back() == '<'){
                    sum++;
                    v.pop_back();
                }
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}