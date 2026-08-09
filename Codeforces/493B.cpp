// url: https://codeforces.com/contest/493/problem/B
// Title: Vasya And Wrestling
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long int> f, s;
    long long int sumF = 0, sumS = 0;
    char last;
    for (int i = 0; i < n; i++){
        long long int temp; cin >> temp;
        if(temp > 0){
            last = 'F';
            sumF += temp;
            f.push_back(temp);
        }else{
            last = 'S';
            temp = -temp;
            sumS += temp;
            s.push_back(temp);
        }
    }

    if(sumF > sumS) cout << "first\n";
    else if(sumS > sumF) cout << "second\n";
    else{
        int idx = 0;
        while(idx < f.size() && idx < s.size()){
            if(f[idx] > s[idx]){
                cout << "first\n";
                return 0;
            }else if(s[idx] > f[idx]){
                cout << "second\n";
                return 0;
            }
            idx++;
        }
        if(idx < f.size() && idx == s.size()) cout << "first\n";
        else if(idx == f.size() && idx < s.size()) cout << "second\n";
        else{
            if(last == 'F')cout << "first\n";
            else cout << "second\n";
        }
    }
    return 0;
}