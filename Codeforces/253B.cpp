//https://codeforces.com/contest/253/problem/B
// Physics Practical
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    
    int menor = 1e5+5;
    
    for(int i = 0; i < n; i++){
        int atual = v[i];
        auto a = upper_bound(v.begin()+i, v.end(), atual*2);
        int idx = distance(v.begin(), a);

        menor = min(menor, i+n-idx);

    }

    cout << menor << "\n";
    
}