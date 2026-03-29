#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, m; cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(s == "fechou"){
            n++;
        }else{
            n--;
        }
    }
 
    cout << n << endl;

    return 0;
}