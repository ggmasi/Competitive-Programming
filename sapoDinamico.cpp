#include <bits/stdc++.h>
using namespace std;

struct pedra{
    char tamanho;
    int dist;
};

int main(){
    int t; cin >> t;
    int cnt = 1;
    while(t--){
        int n, d; cin >> n >> d;
        vector<pedra> v(n);
        
        char temp;
        for (int i = 0; i < n; i++){
            cin >> v[i].tamanho >> temp >> v[i].dist;
            if(n < n-1) cin >> temp;
        }

        bool pegou = false;
        
        int distMax = v[0].dist;
        int distAtual = distMax;
        if(v[0].tamanho == 'S'){
            v[0].dist = -1;
            pegou = true;
        } 
        for (int i = 1; i < n; i++){
            if(v[i].tamanho == 'B'){
                distMax  = max(distMax, v[i].dist-distAtual);
                distAtual = v[i].dist;
            }else if(!pegou){
                distMax  = max(distMax, v[i].dist-distAtual);
                distAtual = v[i].dist;
                pegou = true;
                v[i].dist = -1;
            }else pegou = false;
        }

        distMax = max(distMax, d-distAtual);
        distAtual = d;
        
        for (int i = n-1; i >= 0; i--){
            if(v[i].tamanho == 'B'){
                distMax  = max(distMax, distAtual-v[i].dist);
                distAtual = v[i].dist;
            }else if(v[i].dist != -1){
                distMax  = max(distMax, distAtual-v[i].dist);
                distAtual = v[i].dist;
                v[i].dist = -1;
            }
        }
        
        distMax  = max(distMax, distAtual);

        
        cout << "Case " << cnt << ": "<< distMax << endl;
        cnt++;
    }
}