//https://codeforces.com/contest/766/problem/B
// Mahmoud And Atriangle
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 1; i < n-1; i++){
        if(v[i]+v[i-1] > v[i+1]){
            cout << "YES\n";
            return 0;
        }
    }
    
    cout << "NO\n";
    return 0;
    
}