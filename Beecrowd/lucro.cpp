//https://judge.beecrowd.com/pt/problems/view/1310
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int c; cin >> c;
        int temp; cin >> temp;
        int ant = temp-c;
        int maior = temp-c;
        for (int i = 1; i < n; i++){
            cin >> temp;
            ant = max(temp-c, (ant+temp-c));
            if(ant > maior){
                maior = ant;
            }
        }
        if(maior <= 0) maior = 0;
        cout << maior << endl;
    }
}