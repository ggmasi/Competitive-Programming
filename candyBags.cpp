//https://codeforces.com/problemset/problem/334/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int idxI = 1, idxF = 0;
    for (int i = 0; i < n; i++){
        for (int i = 0; i < n/2; i++){
            cout << idxI << " "<< (n*n)-idxF << " ";
            idxI++;
            idxF++;
        }
        cout << endl;
    }
    
}