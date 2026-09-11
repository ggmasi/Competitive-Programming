// url: https://judge.beecrowd.com/pt/runs/code/49753013
// Title: Fundindo Árvores
#include <bits/stdc++.h>
using namespace std;

struct esq{
    int central;
    int filhoesq;
    int pai;
    int sum;
};

struct dir{
    int central;
    int filhodir;
    int pai;
    int sum;
};

int dfsRaizEsq(int v, vector<esq>& l){
    // if(v != 1) l[v].sum = l[l[v].pai].sum+1;
    if(l[v].central != 0){
        // cout << v << "\n";
        l[l[v].central].sum = l[v].sum+1;
        return dfsRaizEsq(l[v].central, l);
    }else return l[v].sum;
}
int dfsEsq(int v, vector<esq>& l){
    int res = l[v].sum;
    if(l[v].central != 0){
        l[l[v].central].sum = l[v].sum+1;
        res = max(res, dfsEsq(l[v].central, l));
    }

    if(l[v].filhoesq != 0){
        l[l[v].filhoesq].sum = 1;
        res = max(res, dfsEsq(l[v].filhoesq, l));
    }

    return res;
}

int dfsRaizDir(int v, vector<dir>& r){
    // if(v != 1) r[v].sum = r[r[v].pai].sum+1;
    if(r[v].central != 0){
        r[r[v].central].sum = r[v].sum+1;
        return dfsRaizDir(r[v].central, r);
    }else return r[v].sum;
}

int dfsDir(int v, vector<dir>& r){
    int res = r[v].sum;
    if(r[v].central != 0){
        r[r[v].central].sum = r[v].sum+1;
        res = max(res, dfsDir(r[v].central, r));
    }

    if(r[v].filhodir != 0){
        r[r[v].filhodir].sum = 1;
        res = max(res, dfsDir(r[v].filhodir, r));
    }

    return res;
}

int main(){
    int n; cin >> n;
    vector<esq> l(n+1);
    l[1].sum = 1;
    for (int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        // if(b){
        l[a].filhoesq = b;
        // l[b].sum = 1;
        // }
        // if(c){
        l[a].central = c;
        // l[c].sum = l[a].sum+1;
        // }
        l[b].pai = a;
        l[c].pai = a;
    }
    
    int m; cin >> m;
    vector<dir> r(m+1);
    r[1].sum = 1;
    for (int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        r[a].filhodir = c;
        r[a].central = b;
        // r[b].pai = a;
        // r[c].pai = a;
        r[c].sum = 1;
        r[b].sum = r[a].sum+1;
    }

    int raizE = dfsRaizEsq(1, l);
    int raizD = dfsRaizDir(1, r);

    int maiorE = dfsEsq(1, l);
    int maiorD = dfsDir(1, r);
    
    // cout << raizE << " " << maiorE << endl;
    int raiz = 0;
    int outro = 0;
    if(raizE > raizD){
        raiz = raizE;
        outro = max(raizD, maiorD);
    }else if(raizE < raizD){
        raiz = raizD;
        outro = max(raizE, maiorE);
    }else{
        if(maiorD > maiorE){
            outro = maiorD;
            raiz = raizE;
        }else{
            outro = maiorE;
            raiz = raizD;
        }
    }


    // cout << raizD << " " << maiorD << endl;


    int ans = (n+m)-(min(outro, raiz));

    cout << ans << "\n";
}