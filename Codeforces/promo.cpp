//https://codeforces.com/problemset/problem/1697/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long int> p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.rbegin(), p.rend());
    for (int i = 1; i < n; i++){
        p[i] += p[i-1];
    }
    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        if(x == y){
            cout << p[x-1] << endl;
            continue;
        }
        if(y == 1){
            cout << p[x-1]-p[x-2] << endl;
            continue;
        }
        cout << p[x-1]-p[x-y-1] << endl;
    }
    
}