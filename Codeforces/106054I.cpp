// url: https://codeforces.com/gym/106054/problem/I
// Title: Inés and her compitas
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;

    vector<int> v(n+1, 0);

    for (int i = 0; i < m; i++){
        vector<int> choice(n);
        int x, y; cin >> x >> y;
        int op1 = 0, op2 = 0;

        for (int j = 0; j < n; j++){
            cin >> choice[j];
            if(choice[j] == 1) op1++;
            else op2++;
        }

        if(y > x/(op1+1)){
            v[n] += y;
        }else{
            op1++;
            v[n] += x/op1;
           
        }
        
        for (int j = 0; j < n; j++){
            if(choice[j] == 1){
                v[j] += x/op1;
            }else v[j] += y;
        }
    }

    for(auto x : v){
        cout << x << " ";
    }
    cout << "\n";
    
    return 0;
}