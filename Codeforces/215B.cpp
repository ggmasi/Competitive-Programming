//https://codeforces.com/contest/215/problem/B
// Olympic Medal
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    int m; cin >> m;
    vector<int> y(m);
    for (int i = 0; i < m; i++){
        cin >> y[i];
    }
    int k; cin >> k;
    vector<int> z(k);
    for (int i = 0; i < k; i++){
        cin >> z[i];
    }
    sort(x.rbegin(), x.rend());
    sort(y.rbegin(), y.rend());
    sort(z.begin(), z.end());
    int a, b; cin >> a >> b;
    double r2 = 0;

    int idxR = 0, idxP = 0;
    while(idxR < n || idxP < m){
        // cout << idxR << " " << idxP << endl;
        double r1 = x[idxR];
        double p1 = y[idxP];
        for (int j = 0; j < k; j++){
            double p2 = z[j];
            double num = sqrt((b*p1)/(b*p1+a*p2))*r1;
            r2 = max(r2, num);
        }
        
        if(idxR >= n-1 && idxP >= m-1) break;
        if(idxR >= n-1){
            idxP++;
        }else if(idxP >= m-1){
            idxR++;
        }else if(x[idxR]-x[idxR+1] < y[idxP]-y[idxP+1]){
            idxP++;
        }else if(x[idxR]-x[idxR+1] > y[idxP]-y[idxP+1]){
            idxR++;
        }else{
            if(idxP >= idxR) idxR++;
            else idxP++;
        }
    }
    
    cout << fixed << setprecision(12) << r2 << "\n";
}