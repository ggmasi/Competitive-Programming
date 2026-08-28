// url: https://codeforces.com/gym/106667/problem/G
// Title: Queue Mischief
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main(){
    int q; cin >> q;

    deque<char> d;
    ll sum = 0;
    ll numA = 0, numB = 0;
    while(q--){
        int t; cin >> t;
        
        if(t == 1){
            char c; cin >> c;
            d.push_back(c);
            if(c == 'B'){
                sum += numA;
                numB++;
            }else numA++;
        }else if(t == 2){
            char c; cin >> c;
            d.push_front(c);
            if(c == 'A'){
                sum += numB;
                numA++;
            }else numB++;
        }else if(t == 3){
            char c = d.back();
            d.pop_back();
            if(c == 'B'){
                sum -= numA;
                numB--;
            }else numA--;
        }else{
            char c = d.front();
            d.pop_front();
            if(c == 'A'){
                sum -= numB;
                numA--;
            }else numB--;
        }

        cout << sum << "\n";
    }

    return 0;
}