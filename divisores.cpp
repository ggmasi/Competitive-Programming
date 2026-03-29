#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;

    for (int n = a; n < c; n += a){
        if(n%b == 0 || d%n == 0 || c%n != 0) continue;

        cout << n << endl;
        return 0;
    }
    
    cout << -1 << endl;
    return 0;

}