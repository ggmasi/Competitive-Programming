//https://codeforces.com/problemset/problem/1734/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        s = 'x'+s;
        long long int sum = 0;
        
        vector<int> custo(n+1, 0);
        for (int i = n; i > 0; i--){
            for (int j = i; j <= n; j+=i){
                if(s[j] == '1') break;
                custo[j] = i;
            }
        }

        
        
        for (int i = 1; i <= n; i++){
            if(s[i] == '0') sum += custo[i];
        }
        
        
        
        cout << sum << "\n";
    }
}