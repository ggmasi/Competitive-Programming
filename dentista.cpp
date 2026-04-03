#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    map<int, int> m;

    for (int i = 0; i < n; i++){
        cin >> start[i] >> end[i];
        m[end[i]] = start[i];
    }
    
    sort(end.begin(), end.end());
    int sum = 1;
    int temp = end[0];
    for (int i = 1; i < n; i++){
        if(m[end[i]] >= temp){
            sum++;
            temp = end[i];
        }
    }
    
    cout << sum << endl;

}