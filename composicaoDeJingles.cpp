#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    while(s != "*"){
        double cnt = 0;
        int sum = 0;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == '/'){
                if(cnt == 1){
                    sum++;
                }
                // cout << sum << endl;
                cnt = 0;
            }else if(s[i] == 'W'){
                cnt += 1;
            }else if(s[i] == 'H'){
                cnt += (double)1/2;
            }else if(s[i] == 'Q'){
                cnt += (double)1/4;
            }else if(s[i] == 'E'){
                cnt += (double)1/8;
            }else if(s[i] == 'S'){
                cnt += (double)1/16;
            }else if(s[i] == 'T'){
                cnt += (double)1/32;
            }else if(s[i] == 'X'){
                cnt += (double)1/64;
            }

            

        }
        
        cout << sum << endl;
        
        cin >> s;
    }
}