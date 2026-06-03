//https://codeforces.com/problemset/problem/520/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> memo(1e4+7, -1);
    int cnt = 0;

    if(n >= m){
        cout << n-m << endl;
        return 0;
    }else{
        cnt = 1;
        int dist = 1;
        queue<int> fila;
        fila.push(n);
        while(!fila.empty()){
            int a1, a2;
            a1 = fila.front()*2;
            a2 = fila.front()-1;
            fila.pop();
            if(a1 > 1e4) a1 = 0;
            if(a2 > 1e4) a2 = 0;

            bool usa1 = false;
            bool usa2 = false;

            if(memo[a1] != -1) usa1 = true;
            if(memo[a2] != -1) usa2 = true;

            if(a1 != 0 && !usa1){
                memo[a1] = cnt;
            }
            if(a2 != 0 && !usa2){
                memo[a2] = cnt;
            }

            if(a1 == m || a2 == m) break;
            
            if(a1 != 0 && !usa1) fila.push(a1);
            if(a2 != 0 && !usa2) fila.push(a2);
            
            dist--;
            if(dist == 0){
                cnt++;
                dist = fila.size();
            }
        }

        cout << memo[m] << endl;
        return 0;

    }

}