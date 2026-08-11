// url: https://codeforces.com/gym/106636/problem/J
// Title: Can you even
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int numPares = 0;
    vector<int> v(n+1);
    vector<int> impares(n+1, 0);
    vector<int> pares(n+1, 0);
    bool temImpar = false;
    for (int i = 1; i <= n; i++){
        pares[i] = pares[i-1];
        impares[i] = impares[i-1];
        cin >> v[i];
        if(v[i]%2 == 0){
            numPares++;
            pares[i]++;
        }else{
            temImpar = true;
            impares[i]++;
        }
    }



    if(!temImpar){
        cout << numPares << "\n";
        return 0;
    }
    
    int maior = 1;
    for (int i = 1; i <= n; i++){
        if(v[i]%2 == 0) continue;

        for (int j = i; j <= n; j++){
            maior = max(maior, (impares[j]-impares[i-1])-(pares[j]-pares[i-1]));
        }
        

        // int l = i, r = i+1;
        // while(r <= n){
        //     maior = max(maior, (impares[r]-impares[l])-(pares[r]-pares[l]));
        //     r++;
        // }
        
    }
    
    cout << numPares+maior << "\n";
    

    
    return 0;
}