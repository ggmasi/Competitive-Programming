//https://codeforces.com/group/YgJmumGtHD/contest/105936/problem/C
// Cartas
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> p1(3);
    vector<int> p2(3);
    vector<int> p3(3);
    vector<int> p4(3);

    map<char, int> m;
    m['4'] = 1; m['5'] = 2; m['6'] = 3; m['7'] = 4;
    m['Q'] = 5; m['J'] = 6; m['K'] = 7; m['A'] = 8;
    m['2'] = 9; m['3'] = 10;

    for (int i = 0; i < 3; i++){
        char num, naipe; cin >> num >> naipe;
        cin.ignore();
        if(num == '4' && naipe == 'P'){
            p1[i] = 14;
        }else if(num == '7' && naipe == 'C'){
            p1[i] = 13;
        }else if(num == 'A' && naipe == 'E'){
            p1[i] = 12;
        }else if(num == '7' && naipe == 'O'){
            p1[i] = 11;
        }else{
            p1[i] = m[num];
        }
    }

    for (int i = 0; i < 3; i++){
        char num, naipe; cin >> num >> naipe;
        cin.ignore();
        if(num == '4' && naipe == 'P'){
            p2[i] = 14;
        }else if(num == '7' && naipe == 'C'){
            p2[i] = 13;
        }else if(num == 'A' && naipe == 'E'){
            p2[i] = 12;
        }else if(num == '7' && naipe == 'O'){
            p2[i] = 11;
        }else{
            p2[i] = m[num];
        }
    }

    for (int i = 0; i < 3; i++){
        char num, naipe; cin >> num >> naipe;
        cin.ignore();
        if(num == '4' && naipe == 'P'){
            p3[i] = 14;
        }else if(num == '7' && naipe == 'C'){
            p3[i] = 13;
        }else if(num == 'A' && naipe == 'E'){
            p3[i] = 12;
        }else if(num == '7' && naipe == 'O'){
            p3[i] = 11;
        }else{
            p3[i] = m[num];
        }
    }

    for (int i = 0; i < 3; i++){
        char num, naipe; cin >> num >> naipe;
        cin.ignore();
        if(num == '4' && naipe == 'P'){
            p4[i] = 14;
        }else if(num == '7' && naipe == 'C'){
            p4[i] = 13;
        }else if(num == 'A' && naipe == 'E'){
            p4[i] = 12;
        }else if(num == '7' && naipe == 'O'){
            p4[i] = 11;
        }else{
            p4[i] = m[num];
        }
    }

    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());
    sort(p3.begin(), p3.end());
    sort(p4.begin(), p4.end());


    int ini1 = 0, fim1 = 2;
    int ini2 = 0, fim2 = 2;
    int ini3 = 0, fim3 = 2;
    int ini4 = 0, fim4 = 2;

    for (int i = 0; i < 3; i++){
        int maxAtual = p1[fim1]; 
        int vencedorAtual = 1;
        fim1--;

        if(p2[fim2] > maxAtual && vencedorAtual != 2){
            maxAtual = p2[fim2]; 
            fim2--;
            vencedorAtual = 2;
        }else{
            if(p2[ini2] == maxAtual && vencedorAtual != 2){
                vencedorAtual = 0;
            }
            ini2++;
        }

        if(p3[fim3] > maxAtual && vencedorAtual != 1){
            maxAtual = p3[fim3];
            fim3--;
            vencedorAtual = 1;
        }else{
            if(p3[ini3] == maxAtual && vencedorAtual != 1){
                vencedorAtual = 0;
            }
            maxAtual = max(maxAtual, p3[ini3]);
            ini3++;
        }

        if(p4[fim4] > maxAtual && vencedorAtual != 2){
            maxAtual = p4[fim4];
            fim4--;
            vencedorAtual = 2;
        }else{
            if(p4[ini4] == maxAtual && vencedorAtual != 2){
                vencedorAtual = 0;
            }
            maxAtual = max(maxAtual, p4[ini4]);
            ini4++;
        }

        cout << vencedorAtual << " ";
        
    }
    cout << "\n";
    return 0;

    
    
    
}