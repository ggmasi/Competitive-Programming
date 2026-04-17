//https://judge.beecrowd.com/pt/problems/view/1018
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int temp = 0;
    cout << n << endl;
    
    temp = n/100; n = n%100;
    cout << temp << " nota(s) de R$ 100,00" << endl;

    temp = n/50; n = n%50;
    cout << temp << " nota(s) de R$ 50,00" << endl;

    temp = n/20; n = n%20;
    cout << temp << " nota(s) de R$ 20,00" << endl;

    temp = n/10; n = n%10;
    cout << temp << " nota(s) de R$ 10,00" << endl;

    temp = n/5; n = n%5;
    cout << temp << " nota(s) de R$ 5,00" << endl;

    temp = n/2; n = n%2;
    cout << temp << " nota(s) de R$ 2,00" << endl;

    temp = n/1; n = n%1;
    cout << temp << " nota(s) de R$ 1,00" << endl;
}