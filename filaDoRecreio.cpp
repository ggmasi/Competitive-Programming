//https://judge.beecrowd.com/pt/problems/view/1548
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        vector<int> sorted(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            sorted[i] = v[i];
        }
        
        sort(sorted.rbegin(), sorted.rend());
        int sum = 0;
        for (int i = 0; i < n; i++){
            if(sorted[i] == v[i]) sum++;
        }
        
        cout << sum << endl;
    }
}