// url: https://codeforces.com/contest/262/problem/B
// Title: Roma And Changing Signs
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;

    vector<long long int> v(n);
    long long int sum = 0, menor = 1e4+5;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] < 0 && k > 0){
            v[i] *= -1;
            k--;
        } 
        sum += v[i];
        menor = min(menor, v[i]);
    }

    if(k%2 == 0){
        cout << sum << "\n";
        return 0;
    }

    cout << sum-(2*menor) << "\n";
    return 0;
    
    
}