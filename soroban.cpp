//https://judge.beecrowd.com/pt/problems/view/3048
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    while(1){

        int n = a%10;
        if(n >= 5){
            cout << "-O|";
            n -= 5;
        } 
        else cout << "O-|";

    
        for (int i = 0; i < 5; i++){
            if(i == n){
                cout << "-";
            }else{
                cout << "O";
            }
        }
        
        cout << endl;
        a /= 10;
        if(a == 0) break;
    }
}