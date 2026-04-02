#include <bits/stdc++.h>
using namespace std;




int main(){
    int n, k; cin >> n >> k;

    vector<int> v(n, INT32_MAX);
    v[0] = 0;
    vector<int> pesos(n);

    for (int i = 0; i < n; i++){
        cin >> pesos[i];
    }

    for (int i = 0; i < n-1; i++){
        for (int j = 1; j <= k; j++){
            if(i+j >= n) break;
            v[i+j] = min(v[i+j], v[i]+abs(pesos[i+j]-pesos[i]));
        }
        
    }

   
    
    cout << v[n-1] << endl;

}