//https://codeforces.com/contest/2254/problem/C1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a, b; cin >> a >> b;
        if(n < 3){
            if(a == b){
                cout << "YES\n";
                continue;
            }else{
                cout << "NO\n";
                continue;
            }
        }

        int contA = 0, contB = 0;
        for (int i = 0; i < n; i+= 2){
            if(a[i] == '1') contA++;
            if(b[i] == '1') contB++;
        }
        
        if(contA != contB){
            cout << "NO\n";
            continue;
        }

        contA = 0, contB = 0;
        for (int i = 1; i < n; i+= 2){
            if(a[i] == '1') contA++;
            if(b[i] == '1') contB++;
        }

        if(contA != contB){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
}