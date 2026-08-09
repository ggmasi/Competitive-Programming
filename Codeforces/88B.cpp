// url: https://codeforces.com/contest/88/problem/B
// Title: Keyboard
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x; cin >> n >> m >> x;
    map<char, vector<pair<int, int>>> k;
    map<char, int> memo;
    vector<pair<int, int>> shift;
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            char temp; cin >> temp;
            if(temp == 'S'){
                shift.push_back(make_pair(i, j));
                continue;
            }
            k[temp].push_back(make_pair(i, j));
        }
    }

    int q; cin >> q;
    int ans = 0;
    bool flag = true;
    while(q--){
        char temp; cin >> temp;
        
        if(temp >= 'A' && temp <= 'Z'){
            if(shift.size() == 0){
                flag = false;
                continue;
            }else{
                temp = tolower(temp);
                int menor = INT32_MAX;
                if(k.contains(temp)){
                    if(!memo.contains(temp)){
                        for(auto i : shift){
                            for(auto j : k[temp]){
                                menor = min(menor, (j.first-i.first)*(j.first-i.first) + (j.second-i.second)*(j.second-i.second));
                            }
                        }
                        memo[temp] = menor;
                    }
                    if(memo[temp] > x*x){
                        ans++;
                    }
                }else{
                    flag = false;
                    continue;
                }
            } 
        }else if(!k.contains(temp)){
            flag = false;
            continue;
        }
    }
    
    if(flag) cout << ans << "\n";
    else cout << "-1\n";

    return 0;

}