// url: https://codeforces.com/contest/608/problem/B
// Title: Hamming Distance Sum
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int diff = b.length()-a.length();
    vector<int> z(a.length(), 0);
    vector<int> u(a.length(), 0 );

    if(a[0] == '1') u[0]++;
    else z[0]++;

    for (int i = 1; i < a.length(); i++){
        z[i] = z[i-1];
        u[i] = u[i-1];
        
        if(a[i] == '1') u[i]++;
        else z[i]++;    
    }

    long long int ans = 0;
    for (int i = 0; i < b.length(); i++){
        int l = max(0, i-diff);
        int r = min((int)a.length()-1, i);
        

        if(b[i] == '0') ans += l > 0 ? u[r]-u[l-1] : u[r];
        else ans += l > 0 ? z[r]-z[l-1] : z[r];
    }
    
    cout << ans << "\n";
    return 0;
    
}