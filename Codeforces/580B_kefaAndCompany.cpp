//https://codeforces.com/contest/580/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n >> d;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    long long int maior = v[0].second;
    long long int atual = v[0].second;
    int menorIdx = 0;

    for (int i = 1; i < n; i++){
        atual += v[i].second;
        
        while(menorIdx < i && v[i].first-v[menorIdx].first >= d){
            atual -= v[menorIdx].second;
            menorIdx++;
        }
        
        maior = max(maior, atual);
    }
    
    cout << maior << "\n";
}