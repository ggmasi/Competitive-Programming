//https://judge.beecrowd.com/pt/problems/view/1449
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int m, n; cin >> m >> n;
        map<string, string> dic;
        for (int i = 0; i < m; i++){
            string s1, s2;
            cin >> s1;
            cin.ignore();
            getline(cin, s2);
            dic[s1] = s2;
        }
        
        for (int i = 0; i < n; i++){
            bool flag = false;
            string s; getline(cin, s);
            string temp;
            stringstream ss(s);
            while(ss >> temp){
                if(flag){
                    cout << " "; 
                }
                flag = true;
                if(dic.find(temp) != dic.end()){
                    cout << dic[temp];
                }
                else cout << temp;

            }
            cout << endl;    
        }
        cout << endl;
        
    }
}