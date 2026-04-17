//https://cses.fi/problemset/task/1730
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        int num = 0;

        for (int i = 0; i < n; i++){
            int a; cin >> a;
            num ^= a;
        }
        if(num == 0){
            cout << "second" << endl;
        }else{
            cout << "first" << endl;
        }
    }
}