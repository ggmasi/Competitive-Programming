//https://judge.beecrowd.com/pt/problems/view/1171
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    map<int, int> m;
    while(t--){
        int temp; cin >> temp;
        m[temp]++;
    }

    for(auto par : m){
        cout << par.first << " aparece " << par.second << " vez(es)" << endl;
    }
    return 0;
}