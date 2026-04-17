//https://judge.beecrowd.com/pt/problems/view/1589
#include <bits/stdc++.h>
using namespace std;
 
int main() {
     
    int t; cin >> t;
    
    while(t--){
        int r1, r2; cin >> r1 >> r2;
        
        if(r1 < r2){
            cout << (r1*2)+r2 << endl;
        }else{
            cout << (r2*2)+r1 << endl;
        }
    }
 
    
    
    
 
    return 0;
}