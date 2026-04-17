//https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/zero/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if(x != 0){
            v[cnt] = x;
            sum += x;
            cnt++;
        }else{
            cnt--;
            sum -= v[cnt];
        }
    }
    cout << sum << endl;
}