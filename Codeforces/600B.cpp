// url: https://codeforces.com/contest/602/problem/B
// Title: Approximating Aconstant Range
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    vector<int> res(n, 1);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int i = 1;
    while(i < n && abs(v[i]-v[i-1]) != 1){
        if(abs(v[i]-v[i-1]) == 0){
            res[i] = res[i-1]+1;
        }
        i++;
    }
    if(i < n){
        res[i] = res[i-1]+1;
    }
    int ultMenor = i-1, ultMaior = i;
    if(v[ultMenor] > v[ultMaior]) swap(ultMaior, ultMenor);

    for (i+1; i < n; i++){
        if(v[i] == v[ultMenor]){
            res[i] = res[i-1]+1;
            ultMenor = i;
        }else if(v[i] == v[ultMaior]){
            res[i] = res[i-1]+1;
            ultMaior = i;
        }else if(v[i] == v[ultMaior]+1){
            res[i] = i-ultMenor;
            ultMenor = ultMaior;
            ultMaior = i;
        }else if(v[i] == v[ultMenor]-1){
            res[i] = i-ultMaior;
            ultMaior = ultMenor;
            ultMenor = i;
        }else{
            ultMaior = i;
            ultMenor = i;
        }
    }
    
    int ans = 0;
    for(auto x : res){
        ans = max(ans, x);
    }

    cout << ans << "\n";
}