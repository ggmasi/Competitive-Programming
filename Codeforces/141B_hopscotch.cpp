//https://codeforces.com/contest/141/problem/B?locale=en
#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, x, y; cin >> a >> x >> y;

    if((int)y%(int)a == 0 || y <= 0){
        cout << -1 << "\n";
        return 0;
    }
    
    int div = y/a;
    if(div == 0){
        if(x > -a/2 && x < a/2){
            cout << 1 << "\n";
        }else{
            cout << -1 << "\n";
        }
        return 0;
    }else if(div == 1){
        if(x > -a/2 && x < a/2){
            cout << 2 << "\n";
        }else{
            cout << -1 << "\n";
        }
        return 0;
    }

    double limitX;
    if(div%2 == 0){
        if(x == 0){
            cout << -1 << "\n";
            return 0;
        }
        limitX = a;
    } 
    else limitX = a/2;

    if(x >= limitX || x <= -limitX){
        cout << -1 << "\n";
        return 0;
    }

    if(div%2 == 1){
        cout << div+(div/2)+1 << "\n";
    }else{
        if(x > 0){
            cout << div+(div/2)+1 << "\n";
        }else{
            cout << div+(div/2) << "\n";
        }
    }

    return 0;
}