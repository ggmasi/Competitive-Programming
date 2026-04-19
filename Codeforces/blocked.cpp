//https://codeforces.com/contest/2220/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int, greater<int>> conj;
        bool b = false;
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            if(conj.find(temp) != conj.end()){
                b = true;
            }else{
                conj.insert(temp);
            }
        }
        if(b){
            cout << -1 << endl;
        }else{
            for(int num : conj){
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}