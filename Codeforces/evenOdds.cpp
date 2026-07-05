//https://codeforces.com/problemset/problem/318/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k; cin >> n >> k;
    if(n%2 == 0){
        if(k > n/2){
            cout << (k-n/2)*2 << endl;
            return 0;
        }else{
            cout << n - ((n/2)-k)*2 - 1 << endl;
            return 0;
        }
    }else{
        if(k <= (n/2)+1){
            cout << (n - ((n/2)-k)*2)-2 << endl;
            return 0;
        }else{
            cout << (k-(n/2)-1)*2 << endl;
            return 0;
        }
    }
}