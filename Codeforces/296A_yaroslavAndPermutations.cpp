//https://codeforces.com/contest/296/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(1001, 0);
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        v[temp]++;
    }
    
    if(n == 1){
        cout << "YES\n";
        return 0;
    }

    for(auto x : v){
        if(n%2 == 0){
            if(x > n/2){
                cout << "NO\n";
                return 0;
            }
        }else{
            if(x > (n/2)+1){
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}