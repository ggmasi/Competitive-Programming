//https://judge.beecrowd.com/pt/problems/view/3343
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, x; cin >> n >> x;
    ll np = 0, nm = 0, ng = 0;
    string s; cin >> s;
    ll p, m, g; cin >> p >> m >> g;

    vector<ll> muralhas;
    muralhas.push_back(x);

    ll idxP = 0, idxM = 0, idxG = 0;

    for (ll i = 0; i < n; i++){
        char tam = s[i];
        bool parou = false;
        if(tam == 'P'){
            for (idxP; idxP < muralhas.size(); idxP++){
                if(muralhas[idxP] >= p){
                    muralhas[idxP] -= p;
                    parou = true;
                    break;
                }

            }
            if(!parou){
                muralhas.push_back(x-p);
                idxP = muralhas.size()-1;
            }
        }else if(tam == 'M'){
            for (idxM; idxM < muralhas.size(); idxM++){
                if(muralhas[idxM] >= m){
                    muralhas[idxM] -= m;
                    parou = true;
                    break;
                }

            }
            if(!parou){
                muralhas.push_back(x-m);
                idxM = muralhas.size()-1;
            }
        }else{
            for (idxG; idxG < muralhas.size(); idxG++){
                if(muralhas[idxG] >= g){
                    muralhas[idxG] -= g;
                    parou = true;
                    break;
                }
            }
            if(!parou){
                muralhas.push_back(x-g);
                idxG = muralhas.size()-1;
            }

        }
    }
    
   
    cout << muralhas.size() << endl;
    
}