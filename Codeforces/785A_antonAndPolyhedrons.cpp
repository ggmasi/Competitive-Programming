//https://codeforces.com/contest/785/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int res = 0;
    
    while(n--){
        string s; cin >> s;
        if(s == "Icosahedron") res += 20;
        else if(s == "Cube") res += 6;
        else if(s == "Octahedron") res += 8;
        else if(s == "Dodecahedron") res += 12;
        else if(s == "Tetrahedron") res += 4;
    }

    cout << res << endl;
}