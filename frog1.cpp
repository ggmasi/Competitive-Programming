#include <bits/stdc++.h>
using namespace std;




int main(){
    int n; cin >> n;

    vector<int> v(n, INT32_MAX);
    v[0] = 0;
    vector<int> pesos(n);
    for (int i = 0; i < n; i++){
        cin >> pesos[i];
    }

    for (int i = 0; i < n-1; i++){
        v[i+1] = min(v[i+1], v[i]+abs(pesos[i]-pesos[i+1]));
        if(i == n-2) continue;
        v[i+2] = min(v[i+2], v[i]+abs(pesos[i]-pesos[i+2]));
    }
    
    
    cout << endl << v[n-1] << endl;
    
}