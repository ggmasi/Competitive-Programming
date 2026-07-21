//https://codeforces.com/problemset/gymProblem/104555/C
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> curtidas;
vector<int> res;
vector<int> lis;


void dfs(vector<vector<int>>& grafo, int no, int paiNo){
    int pos = lower_bound(lis.begin(), lis.end(), curtidas[no])-lis.begin();

    int valorAntigo = -1;
    bool adicionou = false;

    if(pos == lis.size()){
        adicionou = true;
        lis.push_back(curtidas[no]);
    }else{
        valorAntigo = lis[pos];
        lis[pos] = curtidas[no];
    }

    res[no] = lis.size();

    for(auto x : grafo[no]){
        if(x != paiNo){
            dfs(grafo, x, no);
        }
    }

    if(adicionou){
        lis.pop_back();
    }else{
        lis[pos] = valorAntigo;
    }
    
    return;
}

int main(){
    cin >> n;
    vector<vector<int>> grafo(n+1);
    curtidas.assign(n+1, 0);
    res.assign(n+1, 0);
    // res[1] = 0;
    for (int i = 2; i <= n; i++){
        int temp; cin >> temp;
        grafo[temp].push_back(i);
        grafo[i].push_back(temp);
    }

    for (int i = 1; i <= n; i++){
        cin >> curtidas[i];
    }
    dfs(grafo, 1, 0);
    
    for (int i = 2; i <= n; i++){
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}