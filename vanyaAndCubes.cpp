#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    int sum = 2;
    int sub = 1;
    while(n > 0){
        n -= sub;
        cnt++;
        sub += sum;
        sum += sum+1;
    }

    cout << cnt << endl;
}