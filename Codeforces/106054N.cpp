// url: https://codeforces.com/gym/106054/problem/N
// Title: Nothofagus antarctica
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    int x, y; cin >> x >> y;
    int xmin = x-1, xmax = x+1, ymin = y-1, ymax = y+1;

    for (int i = 1; i < n; i++){
        cin >> x >> y;
        xmin = min(xmin, x-1);
        ymin = min(ymin, y-1);
        xmax = max(xmax, x+1);
        ymax = max(ymax, y+1);
    }
    
    cout << (xmax-xmin)*2 + (ymax-ymin)*2 << "\n";

    
    return 0;
}