// url: https://codeforces.com/problemset/problem/651/B
// Title: Beautiful Paintings
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v;
    vector<int> freq(1001, -1);
    for (int i = 0; i < n; i++){
        int temp; cin >> temp;
        v.push_back(temp);
        if(freq[temp] == -1){
            freq[temp] = 0;
        }
        freq[temp]++;
    }
    sort(freq.rbegin(), freq.rend());
    cout << v.size()-freq[0] << "\n";
    
    
    return 0;
}