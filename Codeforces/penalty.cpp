//https://codeforces.com/problemset/problem/1553/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        bool flag = false;
        int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
        for (int i = 0; i < 10; i++){
            if(s[i] == '1'){
                if(i%2 == 0){
                   a1++;
                   a2++; 
                } 
                else{
                    b1++;
                    b2++;
                } 
            }else if(s[i] == '?'){
                if(i%2 == 0){
                   a1++; 
                } 
                else{
                    b2++;
                }
            }

            if(a1 > b1){
                if(i%2 == 0){
                    if((9-i+1)/2 < a1-b1){
                        cout << i+1 << endl;
                        break;
                    }
                }else{
                    if((9-i)/2 < a1-b1){
                        cout << i+1 << endl;
                        break;
                    }
                }
            }
            if(a2 < b2){
                if(i%2 == 0){
                    if((9-i+1)/2 <= b2-a2){
                        cout << i+1 << endl;
                        break;
                    }
                }else{
                    if((9-i)/2 < b2-a2){
                        cout << i+1 << endl;
                        break;
                    }
                }
            }else if(i == 9){
                cout << 10 << endl;
            }
        }

       
        

    }
}