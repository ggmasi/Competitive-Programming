//https://codeforces.com/contest/714/problem/B
// Filya And Homework
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<int> v;
    
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        v.insert(temp);
    }
    
    if(v.size() > 3){
        cout << "NO\n";
    }else if(v.size() == 3){
        int v0, v1, v2;
        int idx = 0;
        for(auto x : v){
            if(idx == 0) v0 = x;
            else if(idx == 1) v1 = x;
            else v2 = x;
            idx++;
        }
        if(v1-v0 == v2-v1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }else{
        cout << "YES\n";
    }

    return 0;
}