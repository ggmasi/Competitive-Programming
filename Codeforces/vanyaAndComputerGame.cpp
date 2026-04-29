//https://codeforces.com/contest/492/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll mdc(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll mmc(ll a, ll b) {
    return (a * b) / mdc(a, b);
}


int main(){
    ll t, x, y; cin >> t >> x >> y;
    ll minM = mmc(x,y);
    ll divX = minM/x, divY = minM/y;

    vector<int> v(x+y);
    ll cntX = 0, cntY = 0;

    for (int i = 0; i < x+y; i++){
        if(cntX == cntY){
                cntX += divX;
                cntY += divY;
                v[i] = 2;
                if(i < x+y-1 && i != 0){
                    v[i+1] = 2;
                    i++;
                }
            }
            else if(cntX < cntY){
                cntX += divX;
                v[i] = 0;
                
            }else if(cntX > cntY){
                cntY += divY;
                v[i] = 1;
            }
    }
    


    while(t--){
        ll hp; cin >> hp;
        if(x == y){
            cout << "Both" << endl;
            continue;
        }
        
        
        ll ultimo = 2;
        
        hp = hp%(x+y);
        

        if(v[hp] == 0){
            cout << "Vanya" << endl;
        }else if(v[hp] == 1){
            cout << "Vova" << endl;
        }else{
            cout << "Both" << endl;
        }
    }
}