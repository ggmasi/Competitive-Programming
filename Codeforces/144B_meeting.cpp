//https://codeforces.com/contest/144/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int xa, ya, xb, yb; cin >> xa >> ya >> xb >> yb;

    int max_x = max(xa, xb), min_x = min(xa, xb), max_y = max(ya, yb), min_y = min(ya, yb);

    vector<pair<int, int>> v;
    v.push_back(make_pair(min_x, min_y));
    v.push_back(make_pair(max_x, min_y));
    v.push_back(make_pair(min_x, max_y));
    v.push_back(make_pair(max_x, max_y));

    for (int i = 1; i < max_x - min_x; i++){
        v.push_back(make_pair(max_x-i, min_y));
        v.push_back(make_pair(max_x-i, max_y));
    }

    for (int i = 1; i < max_y - min_y; i++){
        v.push_back(make_pair(min_x, max_y-i));
        v.push_back(make_pair(max_x, max_y-i));
    }
    
    vector<bool> b(v.size(), true);
    int num = v.size();


    // cout << endl << endl;
    // for(auto x : v){
    //     cout << x.first << " " << x.second << ", ";
    // }
    // cout << endl << endl;


    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x, y, r; cin >> x >> y >> r;
        if(n == 0) continue;

        for (int i = 0; i < v.size(); i++){
            if(b[i]){
                double dist = sqrt((x-v[i].first)*(x-v[i].first) + (y-v[i].second)*(y-v[i].second));
                if(dist <= r){
                    b[i] = false;
                    num--;
                }
            }
        }
        
    }
 
    
    cout << num << "\n";
    return 0;
}