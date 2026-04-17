//https://judge.beecrowd.com/pt/problems/view/1251
#include <bits/stdc++.h>
using namespace std;

    bool compara(pair<int, int>a, pair<int, int> b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    }

int main(){

    string s;
    int c = 0;
    while(cin >> s){
        if(c != 0){
            cout << endl;
        }
        c++;
        map<int, int> m;
        for (int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }

        vector<pair<int, int>> p;


        for (auto [i, j] : m){
            p.push_back(make_pair(j, i));
        }
        
        sort(p.begin(), p.end(), compara);
        
        for(auto [i, j] : p){
            cout << j << " " << i << endl;
        }
    }
}