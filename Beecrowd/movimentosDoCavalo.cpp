//https://judge.beecrowd.com/pt/problems/view/1100
#include <bits/stdc++.h>
using namespace std;

int main(){
    char xi, yi, xf, yf;
    char espaco;
    while(cin >> xi){
        cin >> yi >> espaco >> xf >> yf;
        
        queue<int> fila;
        int dest = ((xf-96)*10)+(yf-48);
        fila.push(((xi-96)*10)+(yi-48));
        int cnt = 0;
        while(!fila.empty()){
            cnt++;
            int atual = fila.front();
            fila.pop();
            if(atual > 18 && atual < 60){
                if(atual%10 > 2 && atual%10 < 6){
                    if(atual-21 == dest) break;
                    fila.push(atual-21);
                    if(atual+21 == dest) break;
                    fila.push(atual+21);
                    if(atual+12 == dest) break;
                    fila.push(atual+21);
                    if(atual-12 == dest) break;
                    fila.push(atual-12);
                    if(atual+8 == dest) break;
                    fila.push(atual+8);
                    if(atual-8 == dest) break;
                    fila.push(atual-8);
                }
            }
        }



        cin.ignore();
    }
}