// url: https://codeforces.com/gym/106667/problem/B
// Title: Good Spotlights
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<string> V = {"010", "110", "111", "101", "100", "000", "001", "011"};

    string S;

    cin >> S;

    int pos;


    for(int i = 0; i < 8; i++){
        if(V[i] == S){
            pos  = i;
            break;
        }

    }

    for(int i = 0; i < 8; i++){
        cout << V[(pos + i) % 8];
        cout << "\n";
    }

    cout << S << "\n";


    return 0;
}