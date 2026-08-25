// url: https://codeforces.com/contest/1579/problem/E1
// Title: Permutation Minimization by Deque
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        deque<int> d;

        int temp; cin >> temp;
        d.push_back(temp);
        for (int i = 1; i < n; i++){
            cin >> temp;
            if(temp < d.front()){
                d.push_front(temp);
            }else{
                d.push_back(temp);
            }
        }


        for(auto x : d){
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}