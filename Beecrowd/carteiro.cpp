//https://judge.beecrowd.com/pt/problems/view/2448
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    map<int, int> mp;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        mp[temp] = i;
    }
    
    int cnt = 0;
    int atual = 0;
    
    for (int i = 0; i < m; i++){
        int temp; cin >> temp;

        cnt += abs(mp[atual]-mp[temp]);
        atual = temp;
    }
    
    cout << cnt << endl;

}