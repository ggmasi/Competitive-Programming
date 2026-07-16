//https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 1;
    string ult; cin >> ult;
    string atual;
    n--;
    while(n--){
        cin >> atual;
        if(ult[1] == atual[0]) cnt++;
        ult = atual;
    }

    cout << cnt << endl;
}