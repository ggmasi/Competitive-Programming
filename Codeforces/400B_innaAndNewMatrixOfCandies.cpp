//https://codeforces.com/contest/400/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    set<int> c;
    bool flag = true;
    for (int i = 1; i <= n; i++){
        int s, g;
        for (int j = 1; j <= m; j++){
            char temp; cin >> temp;
            if(temp == 'S') s = j;
            if(temp == 'G') g = j;
        }
        int diff = s-g;
        if(diff < 0) flag = false;
        else c.insert(diff);
    }
    
    if(!flag){
        cout << -1 << "\n";
        return 0;
    }

    cout << c.size() << "\n";
    return 0;
}