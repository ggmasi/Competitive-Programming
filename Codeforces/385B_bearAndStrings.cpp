//https://codeforces.com/contest/385/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    if(s.length() < 4){
        cout << 0 << "\n";
        return 0;
    }
    
    long long int sum = 0;

    for (int i = 0; i < s.length(); i++){
        for (int j = i+3; j < s.length(); j++){
            if(s[j-3] == 'b' && s[j-2] == 'e' && s[j-1] == 'a' && s[j] == 'r'){
                sum += s.length()-j;
                break;
            }
        }
        
    }
    
    
    cout << sum << "\n";
}