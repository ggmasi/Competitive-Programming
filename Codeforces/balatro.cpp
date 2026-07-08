//https://codeforces.com/problemset/gymProblem/106443/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> drex(n);
    vector<int> boss(n);

    for (int i = 0; i < n; i++){
        cin >> drex[i];
    }
    
    for (int i = 0; i < n; i++){
        cin >> boss[i];
    }

    sort(drex.begin(), drex.end());
    sort(boss.begin(), boss.end());

    long long int sum = 0;
    for (int i = 0; i < n; i++){
        sum += abs(drex[i]-boss[i]);
    }
    
    cout << sum << endl;

}