//https://codeforces.com/contest/2253/problem/B
// Hypercarp And The Control Panel
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        vector<int> posOp;
        vector<int> sz;
        cin >> v[0];
        posOp.push_back(v[0]);
        sz.push_back(1);
        for (int i = 1; i < n; i++){
            cin >> v[i];
            if(v[i] != v[i-1]){
                posOp.push_back(v[i]);
                sz.push_back(1);
            }else{
                sz.back()++;
            }
        }
        
        bool flag = false;
        int ans = posOp.size();


        for (int i = 0; i < posOp.size()-1; i++){
            if(sz[i] >= 2 && sz[i+1] >= 2){
                ans = posOp.size()+2;
                flag =  true;
                break;
            }
        }

        if(!flag){
            for (int i = 0; i < posOp.size(); i++){
                if(sz[i] >= 2){
                    if(i+2 < posOp.size() && posOp[i] != posOp[i+2]) flag = true;
                    if(i+2 >= posOp.size() && i+1 < posOp.size()) flag = true;

                    if(i-2 >= 0 && posOp[i] != posOp[i-2]) flag = true;
                    if(i-2 < 0 && i-1 >= 0) flag = true;

                    if(flag){
                        ans = posOp.size()+1;
                        break;
                    }
                }
            }
            
        }
        
       
        cout << min(ans, n) << "\n";

        
    }
    return 0;
}