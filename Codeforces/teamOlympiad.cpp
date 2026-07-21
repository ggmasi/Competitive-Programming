//https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> p, m, pe;
    for (int i = 1; i <= n; i++){
        int temp; cin >> temp;
        if(temp == 1) p.push_back(i);
        else if(temp == 2) m.push_back(i);
        else pe.push_back(i);
    }

    int res = min(p.size(), min(m.size(), pe.size()));
    cout << res << endl;
    for (int i = 0; i < res; i++){
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }
    
    
}