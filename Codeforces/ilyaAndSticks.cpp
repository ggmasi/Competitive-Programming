//https://codeforces.com/problemset/problem/525/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(1e6+5, 0);
    int maior = 0;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        maior = max(maior, temp);
        v[temp]++;
    }
    
   
    long long int sum = 0;
    int lados = 0;
    while(maior > 0){
        if(v[maior]%2){
            v[maior]--;
            if(v[maior-1] > 0){
                v[maior-1]++;
            }
        }

        if(lados != 0 && v[maior]){
            sum += (long long int)maior*lados;
            lados = 0;
            if(v[maior] > 0){
                v[maior] -= 2;
            }
            // sum += (long long int)(v[maior]/4)*maior*maior;
        }
        sum += (long long int)(v[maior]/4)*maior*maior;

        if(v[maior]%4){
            if(lados == 0) lados = maior;
            else{
                sum += (long long int)lados*maior;
                lados = 0;
            }
        }
        maior--;
    }

    // cout << lados[0] << " " << lados[1] << endl;

    cout << sum << endl;
    return 0;
    
}