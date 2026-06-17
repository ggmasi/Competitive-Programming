//https://codeforces.com/gym/105327/problem/L
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> incidencia(32, 0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        for (int j = 30; j >= 0; j--){
            int atual = pow(2, j);
            if(temp >= atual){
                incidencia[j]++;
                temp -= atual;
            }
        }
    }

    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 31; j >= 0; j--){
            if(incidencia[j]){
                sum += pow(2, j);
                incidencia[j]--;
            }
        }
        cout << sum << " ";
    }
    cout << "\n";
    return 0;
}