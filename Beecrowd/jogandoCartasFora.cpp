//https://judge.beecrowd.com/pt/problems/view/1110
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t != 0){
        deque<int> v;
        for (int i = 1; i <= t; i++){
            v.push_back(i);
        }
        vector<int> descarte;
        while(v.size() != 1){
            descarte.push_back(v.front());
            v.pop_front();
            
            v.push_back(v.front());
            v.pop_front();
            
        }
        
        cout << "Discarded cards:";
        for (int i = 0; i < descarte.size(); i++){
            cout << " " << descarte[i];
            if(i != descarte.size()-1){
                cout << ",";
            }
        }
        
        cout << "\nRemaining card: " << v.front() << endl; 
        


        cin >> t;
    }
}