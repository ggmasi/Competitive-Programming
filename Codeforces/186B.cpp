//https://codeforces.com/contest/186/problem/B
// Growing Mushrooms
#include <bits/stdc++.h>
using namespace std;

double compare(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }

    return a.first > b.first;
}

int main(){
    double n, t1, t2, k; cin >> n >> t1 >> t2 >> k;
    vector<pair<double, int>> v(n);
    for (int i = 1; i <= n; i++){
        double a, b; cin >> a >> b;
       

        v[i-1].first = max((t1*a)*(1-(k/100))+(t2*b), (t1*b)*(1-(k/100))+(t2*a));
        v[i-1].second = i;
    }
    
    sort(v.begin(), v.end(), compare);
    for(auto x : v){
        cout << x.second << " " << fixed << setprecision(2) << x.first << "\n";
    }

    return 0;

}