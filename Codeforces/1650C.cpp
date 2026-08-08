//https://codeforces.com/problemset/problem/1650/C
// Weight Of The System Of Nested Segments
#include <bits/stdc++.h>
using namespace std;

struct point{
    int pos, w, id;
};



int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<point> v(m);

        for (int i = 0; i < m; i++){
            cin >> v[i].pos >> v[i].w;
            v[i].id = i+1;
        }

        sort(v.begin(), v.end(), [] (point a, point b){
            return a.w < b.w;
        });

        long long int sum = 0;
        for(int i = 0; i < m; i++){
            if(i < 2*n) sum += v[i].w;
            else v.pop_back();
        }
        cout << sum << "\n";
        sort(v.begin(), v.end(), [] (point a, point b){
            return a.pos < b.pos;
        });

        for (int i = 0; i < v.size()/2; i++){
            cout << v[i].id << " " << v[v.size()-i-1].id << "\n";
        }
        
        cout << "\n";
    }
}