// url: https://codeforces.com/contest/544/problem/B
// Title: Sea And Islands
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    if(n%2 == 0){
        if(k > n*n/2){
            cout << "NO\n";
            return 0;
        }
    }else if(k > (n*n/2)+1){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    int num = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(num >= k){
                cout << "S";
            }else{
                if(i%2 == j%2){
                    cout << "L";
                    num++;
                }else{
                    cout << "S";
                }
            }
        }
        cout << "\n";
    }
    return 0;
    
}