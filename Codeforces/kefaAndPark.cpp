//https://codeforces.com/problemset/problem/580/C
#include <bits/stdc++.h>
using namespace std;

int n, m;
map<int, vector<int>> tree;
vector<int> cats;

int dfs(int root, int cntAtual){
    if(cntAtual > m) return 0;
    if(tree[root].size() == 0){
        if(root == 0) return 0;
        return 1;
    } 

    if(cats[root] == 0) cntAtual = 0;

    int sum = 0;
    for(int u : tree[root]){
        sum += dfs(u, cntAtual+cats[u]);
    }

    return sum;
}

int main(){
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        cats.push_back(temp);
    }


    for (int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;

        tree[u-1].push_back(v-1);
    }
    
    cout << dfs(0, cats[0]) << endl;
    

}