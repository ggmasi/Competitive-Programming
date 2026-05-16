//https://judge.beecrowd.com/pt/problems/view/1100
#include <bits/stdc++.h>
using namespace std;

int main(){
    char xi, yi, xf, yf;
    char espaco;
    while(cin >> xi){
        cin >> yi;
        cin.ignore();
        cin >> xf >> yf;
        
        queue<int> fila;
        int dest = ((xf-97))+(yf-49)*10;
        fila.push(((xi-97))+(yi-49)*10);

        int cnt = 1;
        int tam = 1;
        if(dest == fila.front()){
            cout << "To get from " << xi << yi << " to " << xf << yf << " takes 0 knight moves." << endl;
            continue;
        }
        while(!fila.empty() ){
            int atual = fila.front();
            fila.pop();
            tam--;
            if(atual-21 == dest) break;
            if((atual-21)/10 >= 0 && (atual-21)/10 <= 7 && (atual-21)%10 >= 0 && (atual-21)%10 <= 7) fila.push(atual-21);
            if(atual+21 == dest) break;
            if((atual+21)/10 >= 0 && (atual+21)/10 <= 7 && (atual+21)%10 >= 0 && (atual+21)%10 <= 7) fila.push(atual+21);
            if(atual+12 == dest) break;
            if((atual+12)/10 >= 0 && (atual+12)/10 <= 7 && (atual+12)%10 >= 0 && (atual+12)%10 <= 7) fila.push(atual+12);
            if(atual-12 == dest) break;
            if((atual-12)/10 >= 0 && (atual-12)/10 <= 7 && (atual-12)%10 >= 0 && (atual-12)%10 <= 7) fila.push(atual-12);
            if(atual+8 == dest) break;
            if((atual+8)/10 >= 0 && (atual+8)/10 <= 7 && (atual+8)%10 >= 0 && (atual+8)%10 <= 7) fila.push(atual+8);
            if(atual-8 == dest) break;
            if((atual-8)/10 >= 0 && (atual-8)/10 <= 7 && (atual-8)%10 >= 0 && (atual-8)%10 <= 7) fila.push(atual-8);
            if(atual+19 == dest) break;
            if((atual+19)/10 >= 0 && (atual+19)/10 <= 7 && (atual+19)%10 >= 0 && (atual+19)%10 <= 7) fila.push(atual+19);
            if(atual-19 == dest) break;
            if((atual-19)/10 >= 0 && (atual-19)/10 <= 7 && (atual-19)%10 >= 0 && (atual-19)%10 <= 7) fila.push(atual-19);
            if(tam == 0){
                cnt++;
                tam = fila.size();
            }

        }

        cout << "To get from " << xi << yi << " to " << xf << yf << " takes " << cnt << " knight moves." << endl;

        cin.ignore();
    }
}