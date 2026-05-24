//https://judge.beecrowd.com/pt/problems/view/2065
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> func(n);
    vector<int> cli(m);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila;

    for (int i = 0; i < n; i++){
        cin >> func[i];
    }

    for (int i = 0; i < m; i++){
        cin >> cli[i];
        if(i < n){
            fila.push({func[i]*cli[i], i});
        }else{
            pair<int, int> temp = fila.top();
            fila.pop();
            fila.push({temp.first + (func[temp.second]*cli[i]), temp.second});
        }

    }

    int sum = 0;
    while(!fila.empty()){
        sum = fila.top().first;
        fila.pop();
    }
    
    cout << sum << endl;

}