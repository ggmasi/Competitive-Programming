#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, d;
    cin >> n >> d;
    vector<pair<long long int, long long int>> par(n);
    for (long long int i = 0; i < n; i++){
        cin >> par[i].first >> par[i].second;
    }

    sort(par.begin(), par.end());

    long long int v1 = 0, v2 = 0;
    long long int temp = par[0].second;
    for (long long int i = 0; i < n-1; i++){
        if(par[i+1].first - par[i].first <= d){
            temp += par[i+1].second;
        }else{
            if(temp > v1){
                v2 = v1;
                v1 = temp;
            }else if(temp > v2){
                v2 = temp;
            }
            temp = par[i+1].second;
            
        }
    }
    if(temp > v1){
        v2 = v1;
        v1 = temp;
    }else if(temp > v2){
        v2 = temp;
    }

    cout << v1+v2 << endl;
    
}