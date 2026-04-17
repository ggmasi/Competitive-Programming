//https://open.kattis.com/contests/yyp64a/problems/trainsorting
#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int maior = -1, menor = 10001;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > maior){
            count++;
            maior = x;
            continue;
        }
        if(x < menor){
            count++;
            menor = x;
            continue;
        }
    }
    cout << count << endl;
    return 0;
}