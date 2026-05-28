//https://cses.fi/problemset/task/2079
#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> tree;

int findCentroid(int raiz, int alvo){
    bool flag = true;
    for (int filho : tree[raiz]){
        if(tam[filho] > alvo){
            flag = false;
            break;
        }
    }
    
    if(flag){
        return raiz;
    }

    for (int filho : tree[raiz]){
        if(tam[filho] > alvo){
            int temp = findCentroid(filho, alvo);
            if(temp != -1) return temp;
        }
    }
    return -1;
}

int main(){
    int n; cin >> n;

    for (int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        tree[u-1].push_back(v-1);
        
    }


    int alvo = n/2;

    cout << findCentroid(raiz, alvo)+1 << endl;

    
}