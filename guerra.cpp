#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> q(n);
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> q[i];
    }
    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(q.rbegin(), q.rend());
    sort(v.rbegin(), v.rend());
    int idxQ = 0, idxV = 0;
    int sum = 0;
    while(idxQ < n && idxV < n){
        if(q[idxQ] < v[idxV]){
            idxV++;
            sum++;
        }
        idxQ++;
        
    }

    cout << sum << endl;
}