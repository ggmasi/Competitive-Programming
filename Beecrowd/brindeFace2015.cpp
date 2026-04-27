//https://judge.beecrowd.com/pt/problems/view/1944
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    string s = "FACE";
    int sum = 0;
    while(t--){
        if(s.length() == 0){
            s = "FACE";
        }

        for (int i = 0; i < 4; i++){
            char temp; cin >> temp;
            s.push_back(temp);
        }
        int len = s.length();
        if(len >= 8 ){
            if(s[len-1] == s[len-8] && s[len-2] == s[len-7] && s[len-3] == s[len-6] && s[len-4] == s[len-5]){
                sum++;
                for (int i = 0; i < 8; i++){
                    s.pop_back();
                }
                
            }
        }

        
        

    }

    cout << sum << endl;
}