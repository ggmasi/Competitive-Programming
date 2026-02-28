#include <bits/stdc++.h>
using namespace std;

const int MAX = 20;

int n;

int vet[MAX];

int fib(int a){
    if(vet[a] != -1) return vet[a];
    int q = fib(a-1);
    vet[a] = (q*q) + fib(a-2);
    return vet[a];
}

int main(){
    memset(vet, -1, sizeof(vet));
    cin >> vet[0] >> vet[1];
    int x;
    cin >> x;
    cout << fib(x-1) << endl;
}