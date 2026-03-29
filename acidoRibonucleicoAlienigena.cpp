#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int sum = 0;
        for (int i = 0; i < s.length()-1 && s.length() > 0; i++){
            if((s[i] == 'B' && s[i+1] == 'S') || (s[i] == 'S' && s[i+1] == 'B') || (s[i] == 'F' && s[i+1] == 'C') || (s[i] == 'C' && s[i+1] == 'F')){
                sum++;
                s.erase(i, 2);
                i-=2;
                if(i < 0) i = -1;
            }
        }
        cout << sum << endl;
    }
}