// url: https://codeforces.com/contest/651/problem/C
// Title: Watchmen
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    map<int, int> x, y;
    map<pair<int, int>, int> num;

    long long int ans = 0;
    for (int i = 0; i < n; i++){
        int posX, posY; cin >> posX >> posY;
        pair<int, int> atual = {posX, posY};
        // if(num.contains(atual)){
        // }
            
        ans += x[posX] + y[posY] - num[atual];

        x[posX]++; y[posY]++; num[atual]++;
    }
    
    cout << ans << "\n";

    return 0;
}