// url: https://codeforces.com/problemset/problem/475/A
// Title: Bayan Bus
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<string> o = {"+------------------------+",
                        "|#.#.#.#.#.#.#.#.#.#.#.|D|)", 
                        "|#.#.#.#.#.#.#.#.#.#.#.|.|",
                        "|#.......................|",
                        "|#.#.#.#.#.#.#.#.#.#.#.|.|)",
                        "+------------------------+"};
    
    int n; cin >> n;

    for (int i = 1; i < 5; i++){
        if(n){
            o[i][1] = 'O';
            n--;
        }
    }
    int i = 3;
    while(n){
        for (int j = 1; j < 5 && n > 0; j++){
            if(j == 3) continue;
            o[j][i] = 'O';
            n--;
        }
        i += 2;
    }
    

    for (auto s : o){
        cout << s << "\n";
    }
    
    
    return 0;
}