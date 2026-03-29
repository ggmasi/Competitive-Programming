#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int v[n];
        int nimSum = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if(i%2){
                nimSum ^= v[i];
            }
        }
        if(nimSum > 0){
            cout << "first" << endl;
        }else{
            cout << "second" << endl;
        }
    }
}