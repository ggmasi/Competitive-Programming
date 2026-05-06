//https://cses.fi/problemset/task/2207
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

const int LIMIT = 2000;
int gValue[LIMIT + 5];

int calculate_mex(const set<int>& s) {
    int mex = 0;
    while (s.count(mex)) mex++;
    return mex;
}

void precompute() {
    gValue[0] = 0;
    gValue[1] = 0;
    gValue[2] = 0;

    for (int n = 3; n <= LIMIT; n++) {
        set<int> reachable_states;

        for (int i = 1; i * 2 < n; i++) {
            int val = gValue[i] ^ gValue[n - i];
            reachable_states.insert(val);
        }
        gValue[n] = calculate_mex(reachable_states);
    }
}

void solve() {
    int n;
    cin >> n;

    if (n > LIMIT) {
        
        cout << "first" << endl;
    } else {
        if (gValue[n] > 0) {
            cout << "first" << endl;
        } else {
            cout << "second" << endl;
        }
    }
}

int main() {

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}