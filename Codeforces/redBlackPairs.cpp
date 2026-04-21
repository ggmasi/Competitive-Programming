//https://codeforces.com/contest/2225/problem/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<char>> m(2, vector<char>(n));
        int pairs = 0;
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < n; j++){
                cin >> m[i][j];
            }
        }
        


        
        for (int j = 0; j < n; j++){
            if(m[0][j] != 'C' && (m[1][j] == m[0][j])){
                pairs++;
                m[0][j] = 'C';
                m[1][j] = 'C';
            }

        }
        


        
        for (int j = 1; j < n; j++){
            if(m[0][j] != 'C' && m[0][j] == m[0][j-1]){
                pairs++;
                m[0][j] = 'C';
                m[0][j-1] = 'C';
            }

            if(m[1][j] != 'C' && m[1][j] == m[1][j-1]){
                pairs++;
                m[1][j] = 'C';
                m[1][j-1] = 'C';
            }
        } 
        
        

        
        cout << n-pairs << endl;
        

    }
    return 0;
}