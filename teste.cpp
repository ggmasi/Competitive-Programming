#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long int> v;

    v.push_back(1);
    v.push_back(1);

    // long long int t; cin >> t;
    long long int mod = 1e9+7;
    // while(t--){
        long long int n; cin >> n;

        if(v.size() >= n+1){
            cout << v[n-1] << "\n";
            // continue;
        }

        while(v.size() < n+1){
            v.push_back((v[v.size()-2]+v[v.size()-1]));
        }
        
        cout << v.back() << "\n";
        
    // }

    
    

    
}