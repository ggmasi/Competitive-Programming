//https://judge.beecrowd.com/pt/problems/view/2095
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int atualMaior = -1;
    int count = 0;
    for (int i = 0; i < n; i++){
        int t; cin >> t;
        if(t > atualMaior){
            atualMaior = t;
            count++;
        }
    }
    cout << count << endl;
}