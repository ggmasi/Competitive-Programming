//https://judge.beecrowd.com/pt/problems/view/1709
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int i = 1;

    if(n == 2){
        cout << n << endl;
        return 0;
    }

    while(i != (n/2)+1 && i != n){
        i = (i*2);
        if(i > n){
            i = (i%n)-1;
        }

    }

    

    if(i == (n/2)+1){
        cout << n/2 << endl;
    }else{
        cout << n << endl;
    }
}