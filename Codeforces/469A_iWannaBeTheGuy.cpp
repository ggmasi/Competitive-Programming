//https://codeforces.com/contest/469/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < 2; i++)
    {
        int p; cin >> p;
        while(p--){
            int temp; cin >> temp;
            s.insert(temp);
        }
    }
    
    if(s.size() == n){
        cout << "I become the guy.\n";
    }else{
        cout << "Oh, my keyboard!\n";
    }

    return 0;
}