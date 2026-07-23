//https://codeforces.com/contest/298/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ini = -1, fim = -1;
    int lastR = 0;
    for (int i = 0; i < n; i++){
        char temp; cin >> temp;
        if(temp == 'R'){
            lastR = i+1;
            if(ini == -1) ini = i+1;        
        }else if(temp == 'L'){
            if(ini == -1) ini = i+1;
            if(fim == -1) fim = i;
        }
    }
    
    if(fim == -1) fim = lastR+1;

    cout << ini << " " << fim << endl;
}