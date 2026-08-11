// url: https://codeforces.com/contest/378/problem/B
// Title: Semifinals
#include <bits/stdc++.h>
using namespace std;

struct player{
    int value;
    char semi;
    int idx;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> ansA(n, 0), ansB(n, 0);
    vector<player> players;

    for (int i = 0; i < n/2; i++){
        ansA[i] = 1; ansB[i] = 1;
    }
    

    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        players.push_back({a, 'A', i});
        players.push_back({b, 'B', i});
    }

    sort(players.begin(), players.end(), [] (player a, player b){
        return a.value < b.value;
    });
    
    for (int i = 0; i < n; i++){
        if(players[i].semi == 'A'){
            ansA[players[i].idx] = 1;
        }else{
            ansB[players[i].idx] = 1;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << ansA[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++){
        cout << ansB[i];
    }
    cout << "\n";
    return 0;
}