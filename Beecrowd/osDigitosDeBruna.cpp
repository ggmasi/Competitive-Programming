//https://judge.beecrowd.com/pt/problems/view/2820
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int d; cin >> d;
        vector<char> v(d);
    
        for (int i = 0; i < d; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long int n; cin >> n;
        string s;
        while(n > 0){
            s.push_back(v[(n-1)%d]);
    
            n = (n-1)/d;
        }
        
        reverse(s.begin(), s.end());
        cout << s << endl;

    }

}