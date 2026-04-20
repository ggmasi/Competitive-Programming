//https://judge.beecrowd.com/pt/problems/view/1238
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        cin >> s1;
        cin.ignore();
        cin >> s2;
        string res;
        int tam1 = s1.length(); 
        int tam2 = s2.length();
        int i;
        if(tam1 > tam2){
            for (i = 0; i < tam2; i++){
                res.push_back(s1[i]);
                res.push_back(s2[i]);
            }
            for (i; i < tam1; i++){
                res.push_back(s1[i]);
            }
            
        }else{
            for (i = 0; i < tam1; i++){
                res.push_back(s1[i]);
                res.push_back(s2[i]);
            }
            for (i; i < tam2; i++){
                res.push_back(s2[i]);
            }
            
        }

        cout << res << endl;
    }

    return 0;
}