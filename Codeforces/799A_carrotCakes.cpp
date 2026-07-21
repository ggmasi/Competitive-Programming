//https://codeforces.com/contest/799/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, k, d; cin >> n >> t >> k >> d;

    int naoConstroi = (n/k)*t;
    if(n%k) naoConstroi += t;

    int constroi = 0;
    int bolos = 0;
    int f2 = 0;

    for (int i = 1; ; i++){
        if(i%t == 0) bolos += k;

        if(i == d){
            f2 = i;
        }else if(f2){
            if((i-f2)%t == 0) bolos += k;
        }

        if(bolos >= n){
            constroi = i;
            break;
        }   
    }
    // cout << naoConstroi << " " << constroi << endl;
    if(constroi < naoConstroi){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    

}