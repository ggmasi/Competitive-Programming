#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t; cin >> t;
    int x = 1;
    for(int i = 1; i <= t; i++){
        x *= i;
    }
    
    cout << x << endl;
 
    return 0;
}