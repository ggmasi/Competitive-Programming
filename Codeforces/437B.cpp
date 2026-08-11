// url: https://codeforces.com/contest/437/problem/B
// Title: The Child and Set
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int sum, limit; cin >> sum >> limit;

    vector<pair<int, int>> v(limit+1);

    for (int i = 1; i <= limit; i++){
        v[i] = {i & -i, i};
    }

    sort(v.rbegin(), v.rend());


    int idx = 0;
    vector<int> ans;
    while(sum > 0 && idx < limit){
        if(sum-v[idx].first >= 0){
            sum -= v[idx].first;
            ans.push_back(v[idx].second);
        }
        idx++;
    }

    if(sum == 0){
        cout << ans.size() << "\n";
        for(auto x : ans){
            cout << x << " ";
        }
    }else{
        cout << "-1\n";
    }

    
    
    return 0;
}