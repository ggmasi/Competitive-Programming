//https://judge.beecrowd.com/pt/problems/view/1259
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> par;
    vector<int> impar;
    for (int i = 0; i < n; i++){
        int t; cin >> t;
        if(t%2){
            impar.push_back(t);
        }else{
            par.push_back(t);
        }
    }

    sort(par.begin(), par.end());
    sort(impar.rbegin(), impar.rend());
    for(int i : par){
        cout << i << endl;
    }
    for(int i : impar){
        cout << i << endl;
    }
    return 0;
}