#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int nimSum = 0;

        for (int i = 0; i < n; i++){
            int a; cin >> a;
            nimSum ^= a;
        }
        

        if(nimSum == 0){
            cout << "second" << endl;
        }else{
            cout << "first" << endl;
        }
    }
}