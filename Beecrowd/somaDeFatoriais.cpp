//https://judge.beecrowd.com/pt/problems/view/1161
#include <bits/stdc++.h>
using namespace std;

long long int vet[21];

long long int fat(long long int x){
    if(vet[x] != -1) return vet[x];
    return vet[x] = x*fat(x-1);
}

int main(){
    memset(vet, -1, sizeof(vet));
    vet[0] = 1;
    vet[1] = 1;
    long long int a, b;
    while(cin >> a && cin >> b){
        cout << fat(a) + fat(b) << endl;
    }
    return 0;
}