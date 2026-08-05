//https://codeforces.com/group/YgJmumGtHD/contest/105936/problem/K
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {   
        int p, v; cin >> p >> v;
        cout << p+(v*i) << " " << i << endl;
    }
}