//https://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a = 0, d = 0;
    while(n--){
        char temp; cin >> temp;
        if(temp == 'A') a++;
        if(temp == 'D') d++;
    }

    if(a > d) cout << "Anton\n";
    else if(d > a) cout << "Danik\n";
    else cout << "Friendship\n";
    return 0;
}