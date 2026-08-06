//https://codeforces.com/problemset/problem/107/B
#include <bits/stdc++.h>
using namespace std;

int n, m, h; 
vector<int> v;

int main(){
    cin >> n >> m >> h;
    v.push_back(0);
    int sum = 0;
    for (int i = 0; i < m; i++){
        int temp; cin >> temp;
        sum += temp;
        v.push_back(temp);
    }
    if(sum < n){
        cout << "-1\n";
        return 0;
    }
    n--;
    v[h]--;
    sum--;
    if(v[h] == 0 || n == 0){
        cout << "0\n";
        return 0;
    }

    if(sum-v[h]<= 0){
        cout << "1\n";
        return 0;
    }

    double total = 1;
    for (int i = 0; i < n; i++){
        total *= (double)(sum-v[h]-i)/(sum-i);
    }

    
    
    double ans = 1-total;

    cout << fixed << setprecision(6) << ans << "\n";

}