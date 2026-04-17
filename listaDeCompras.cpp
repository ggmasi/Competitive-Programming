//https://judge.beecrowd.com/pt/problems/view/2729
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n; cin >> n;
    getline(cin, s);
    for (int i = 0; i < n; i++){
        getline(cin, s);
        set<string> st;

        stringstream ss(s);
        string p;

        while(ss >> p){
            st.insert(p);
        }
        
        cout << *st.begin();
        for (auto i = st.begin(); i != st.end(); i++){
            if(i == st.begin()) continue;
            cout << " " << *i;
        }
        
        cout << endl;
    }
    
}