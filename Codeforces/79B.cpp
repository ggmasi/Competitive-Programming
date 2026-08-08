//https://codeforces.com/contest/79/problem/B
// Colorful Field
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m, k, t; cin >> n >> m >> k >> t;
    
    vector<pair<int, int>> waste(k);
    for (int i = 0; i < k; i++){
        cin >> waste[i].first >> waste[i].second;
    }

    while(t--){
        int a, b; cin >> a >> b;
        bool flag = false;
        int num = 0;
        for (int i = 0; i < k; i++){
            if(waste[i].first == a && waste[i].second == b){
                flag = true;
                break;
            }

            if(waste[i].first < a || waste[i].first == a && waste[i].second < b){
                num++;
            }
        }
        
        if(flag) cout << "Waste\n";
        else{
            long long int total = (a-1)*m+(b-1) - num;

            if(total%3 == 0) cout << "Carrots\n";
            else if(total%3 == 1) cout << "Kiwis\n";
            else cout << "Grapes\n";
        }


    }
    
    

    return 0;
}