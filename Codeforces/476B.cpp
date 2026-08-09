// url: https://codeforces.com/contest/476/problem/B
// Title: Dreamoon And Wifi
#include <bits/stdc++.h>
using namespace std;

double solve(int posFinal, int posAtual, int numInt){
    if(abs(posFinal-posAtual) > numInt) return 0;

    if(numInt == 0 && posFinal == posAtual) return 1;

    return solve(posFinal, posAtual+1, numInt-1)*0.5 + solve(posFinal, posAtual-1, numInt-1)*0.5; 
}

int main(){
    string s1, s2; cin >> s1 >> s2;
    int posFinal = 0, posAtual = 0, numInt = 0;
    for (int i = 0; i < s1.length(); i++){
        if(s1[i] == '+') posFinal++;
        else posFinal--;

        if(s2[i] == '+') posAtual++;
        else if(s2[i] == '-') posAtual--;
        else numInt++;
    }

    cout << fixed << setprecision(12) << solve(posFinal, posAtual, numInt) << "\n";
    return 0;
}