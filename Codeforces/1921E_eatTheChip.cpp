//https://codeforces.com/problemset/problem/1921/E
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int h, w, xa, ya, xb, yb; cin >> h >> w >> xa >> ya >> xb >> yb;

        if(xa >= xb){
            cout << "Draw\n";
            continue;
        }else if((xb-xa)%2 == 0){
            if(ya == yb){
                cout << "Bob\n";
                continue;
            }else{
                int jogadas;
                if(ya < yb){
                    jogadas = yb-1;
                }else{
                    jogadas = w-yb;
                }

                if(xb-2*jogadas >= xa){
                    cout << "Bob\n";
                }else{
                    cout << "Draw\n";
                }
            }
        }else{
            xa++;
            if(ya == yb){
                cout << "Alice\n";
                continue;
            }
            ya += yb-ya > 0 ? 1 : -1;
            if(ya == yb){
                cout << "Alice\n";
                continue;
            }
            
            int jogadas;
            if(ya < yb){
                jogadas = w-ya;
            }else{
                jogadas = ya-1;
            }

            if(xb-2*jogadas >= xa){
                cout << "Alice\n";
            }else{
                cout << "Draw\n";
            }
        }
    }
}