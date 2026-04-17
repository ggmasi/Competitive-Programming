//https://codeforces.com/problemset/problem/706/B/
#include <bits/stdc++.h>
using namespace std;

int main(){
    char m[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> m[i][j];
        }
        
    }
    
    for (int i = 1; i < 4; i++){
        for (int j = 1; j < 4; j++){
            int b = 0, w = 0;
            if(m[i][j] == '#'){
                b++;
            }else w++;

            if(m[i-1][j] == '#'){
                b++;
            }else w++;

            if(m[i][j-1] == '#'){
                b++;
            }else w++;

            if(m[i-1][j-1] == '#'){
                b++;
            }else w++;

            if(b != 2){
                cout << "YES" << endl;
                return 0;
            }
        }
        
    }
    
    cout << "NO" << endl;
}