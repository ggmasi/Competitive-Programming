//https://codeforces.com/contest/2253/problem/C3
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x, y; cin >> n >> m >> x >> y;

    vector<long long int> a(x);
    vector<long long int> b(y);

    for (int i = 0; i < x; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < y; i++){
        cin >> b[i];
    }

    vector<pair<long long int, int>> elementos;
    int i = 0, j = 0;

    while(i < x && j < y){
        if(a[i] == b[j]){
            elementos.push_back({a[i], 3});
            i++; j++;
        }else if(a[i] < b[j]){
            elementos.push_back({a[i], 1});
            i++;
        }else{
            elementos.push_back({b[j], 2});
            j++;
        }
    }

    while(i < x){
        elementos.push_back({a[i], 1});
        i++;
    }

    while(j < y){
        elementos.push_back({b[j], 2});
        j++;
    }

    reverse(elementos.begin(), elementos.end());

    int ca = 0, cb = 0, cab = 0;
    vector<long long int> escolhidos;

    for(auto p : elementos){
        long long int val = p.first;
        int type = p.second;

        if(ca + cb+ cab >= n+m) break;

        if(type == 1){
            if(ca < n){
                ca++;
                escolhidos.push_back(val);
            }
        }else if(type == 2){
            if(cb < m){
                cb++;
                escolhidos.push_back(val);
            }
        }else{
            cab++;
            escolhidos.push_back(val);
        }
    }

    int total = ca+cb+cab;

    int limite = (total == n+m) ? (n+m-1) : total;

    long long ans = 0;
    for (int k = 0; k < limite; k++) {
        ans += escolhidos[k];
    }

    cout << ans << "\n";
}