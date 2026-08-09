// url: https://codeforces.com/contest/2253/problem/0
// Title: The Best Card
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int maior = n+1;
        bool flag = true;
        for (int i = 2; i <= n; i++){
            if(maior%i == 0){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}