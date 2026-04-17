//https://codeforces.com/gym/106178/problem/J
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;


    int count = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == 'b' && i < s.length()-4){
            if(s[i+1] == 'o' && s[i+2] == 'o' && s[i+3] == 'o' && s[i+4] == 'o'){
                count--;
                i += 4;
                continue;
            }

            if(s[i+1] == 'r' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'o'){
                count += 3;
                i += 4;
                continue;
            }
        }

        if(s[i] == 'h' && i < s.length()-1){
            if(s[i+1] == 'a'){
                count++;
                i++;
                continue;
            }
        }

        
    }
    
    cout << count << endl;
}
