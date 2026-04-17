//https://judge.beecrowd.com/pt/problems/view/2238
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c, d; cin >> a >> b >> c >> d;
    vector<long long int> v;
    for (long long int n = 1; n*n <= c; n++){
        if(c%n == 0){
            if(n%b != 0 && d%n != 0 && n%a == 0){
                cout << n << endl;
                return 0;
            }else if(n*n != c && (c/n)%b != 0 && d%(c/n) != 0 && (c/n)%a == 0){
                v.push_back(c/n);
            }
        }
    }

    if(!v.empty()){
        cout << v.back() << "\n";
        return 0;
    }
    
    cout << -1 << endl;
    return 0;

}