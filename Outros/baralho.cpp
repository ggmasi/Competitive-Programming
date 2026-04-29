//https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/baralho/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<int> paus(13, 0);
    vector<int> copas(13, 0);
    vector<int> espadas(13, 0);
    vector<int> ouros(13, 0);

    int resP = 0, resC = 0, resE = 0, resO = 0;
    string sP = "", sC = "", sE = "", sO = "";
    for (int i = 2; i < s.length(); i++){
        int n = ((s[i-2]-'0')*10)+(s[i-1]-'0');
        int l = s[i];

        if(l == 'P'){
            if(paus[n-1] != 0){
                sP = "erro";
            }else{
                resP++;
                paus[n-1]++;
            }
        }
        if(l == 'C'){
            if(copas[n-1] != 0){
                sC = "erro";
            }else{
                resC++;

                copas[n-1]++;
            }
        }
        if(l == 'E'){
            if(espadas[n-1] != 0){
                sE = "erro";
            }else{
                resE++;
                espadas[n-1]++;

            }
        }
        if(l == 'U'){
            if(ouros[n-1] != 0){
                sO = "erro";
            }else{
                resO++;
                ouros[n-1]++;

            }
        }
    }


    if(sC != "erro"){
        cout << 13-resC << endl;
    }else cout << sC << endl;
    if(sE != "erro"){
        cout << 13-resE << endl;
    }else cout << sE << endl;
    if(sO != "erro"){
        cout << 13-resO << endl;
    }else cout << sO << endl;
    if(sP != "erro"){
        cout << 13-resP << endl;
    }else cout << sP << endl;
}