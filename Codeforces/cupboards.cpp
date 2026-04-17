//https://codeforces.com/contest/248/submission/351768932
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int d = 0, e = 0;
    for (int i = 0; i < n*2; i++){
        int temp; cin >> temp;
        if(i%2 == 0){
            d += temp;
        }else{
            e += temp;
        }
    }

    int r = 0;
    if(d > n/2){
        r += n-d;
    }else{
        r += d;
    }
    
    if(e > n/2){
        r += n-e;
    }else{
        r += e;
    }

    cout << r << endl;
}