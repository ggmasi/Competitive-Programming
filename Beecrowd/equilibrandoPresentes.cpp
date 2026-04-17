//https://judge.beecrowd.com/pt/problems/view/2723
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int t; cin >> t;
        int a = 0, b = 0;
        bool trigger = true;
        for (int i = 0; i < t; i++){
            int temp; cin >> temp;
            if(trigger){
                if(abs((a+temp)-b) <= 5){
                    a += temp;
                }else if(abs((b+temp)-a) <= 5){
                    b += temp;
                }else trigger = false;
            }
        }
        if(trigger){
            cout << "Feliz Natal!\n";
        }else{
            cout << "Ho Ho Ho!\n";
        }
    }
    return 0;
}