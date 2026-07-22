//https://codeforces.com/contest/807/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int res = -1;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        int t1, t2; cin >> t1 >> t2;
        v[i] = t2;
        if(t1 != t2){
            res = 1;
            continue;
        }
        
    }

    if(res == 1){
        cout << "rated\n";
        return 0;
    }

    vector<int> v2 = v;
    sort(v.rbegin(), v.rend());

    if(v2 != v){
        cout << "unrated\n";
    }else{
        cout << "maybe\n";
    }
    
    return 0;
}