// url: https://codeforces.com/contest/257/problem/B
// Title: Playing Cubes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nred, nblue; cin >> nred >> nblue;

    int r = nred-1, b = nblue;
    char last = 'r';
    int p = 0, v = 0;
    for (int i = 1; i <= nred-1+nblue; i++){
        if(i%2 == 1){
            if(last == 'r'){
                if(b > 0){
                    b--;
                    v++;
                    last = 'b';
                }else{
                    r--;
                    p++;
                }
            }else{
                if(r > 0){
                    r--;
                    v++;
                    last = 'r';
                }else{
                    b--;
                    p++;
                }
            }
        }else{
            if(last == 'b'){
                if(b > 0){
                    b--;
                    p++;
                }else{
                    r--;
                    v++;
                    last = 'r';
                }
            }else{
                if(r > 0){
                    r--;
                    p++;
                }else{
                    b--;
                    v++;
                    last = 'b';
                }
            }
        }
    }
    // cout << p << " " << v << endl;
    int ansp = p, ansv = v;
    
    r = nred, b = nblue-1;
    last = 'b';
    p = 0, v = 0;
    for (int i = 1; i <= nred+nblue-1; i++){
        if(i%2 == 1){
            if(last == 'r'){
                if(b > 0){
                    b--;
                    v++;
                    last = 'b';
                }else{
                    r--;
                    p++;
                }
            }else{
                if(r > 0){
                    r--;
                    v++;
                    last = 'r';
                }else{
                    b--;
                    p++;
                }
            }
        }else{
            if(last == 'b'){
                if(b > 0){
                    b--;
                    p++;
                }else{
                    r--;
                    v++;
                    last = 'r';
                }
            }else{
                if(r > 0){
                    r--;
                    p++;
                }else{
                    b--;
                    v++;
                    last = 'b';
                }
            }
        }
    }

    // cout << p << " " << v << endl;

    if(p > ansp){
        ansp = p;
        ansv = v;
    }else if(p == ansp){
        if(v < ansv){
            ansp = p;
            ansv = v;
        }
    }

    cout << ansp << " " << ansv;
    
    return 0;
}