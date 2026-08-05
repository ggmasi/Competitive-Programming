//https://codeforces.com/problemset/problem/1676/F
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        map<int, int> m;
        set<int> nums;
        for (int i = 0; i < n; i++){
            int temp; cin >> temp;
            m[temp]++;
            nums.insert(temp);
        }
        
        vector<int> v;
        for (auto x : nums){
            v.push_back(x);
        }

        
        
        int l = 0, r = 0;
        int maiorL = -1, maiorR = -1;
        int maior = -1;
        while(r < v.size()){
            if(m[v[r]] >= k){
                if(l != r){
                    if(v[r]-v[r-1] == 1){
                        r++;
                    }else{
                        if(r-1-l > maior){
                            maior = r-1-l;
                            maiorL = l;
                            maiorR = r-1;
                        }
                        l = r;
                        r++;
                        continue;
                    }
                }else{
                    r++;
                }
            }else{
                if(r-1-l > maior){
                    maior = r-1-l;
                    maiorL = l;
                    maiorR = r-1;
                }
                r++;
                l = r;
                continue;
            }
        }

        if(r-1-l > maior){
            maior = r-1-l;
            maiorL = l;
            maiorR = r-1;
        }
        if(maiorR == -1 && maiorL == -1){
            cout << "-1\n";
        }else{
            cout << v[maiorL] << " " << v[maiorR] << "\n";
        } 

    }
}