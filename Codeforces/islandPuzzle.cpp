//https://codeforces.com/problemset/problem/634/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> ini, fim;
    int first = -1;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp == 0) continue;
        ini.push_back(temp);
        if(first == -1) first = temp;
    }
    
    int idx = -1;
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        if(temp == 0) continue;
        fim.push_back(temp);
        if(idx == -1 && temp == first) idx = fim.size()-1;
    }

    for (int i = 0; i < ini.size(); i++){
        if(idx >= fim.size()) idx = 0;
        // cout << idx << endl;
        if(ini[i] != fim[idx]){
            cout << "NO\n";
            return 0;
        }
        idx++;
    }
    
    

    cout << "YES\n";
    return 0;
    
}