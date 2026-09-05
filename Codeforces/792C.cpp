// url: https://codeforces.com/contest/792/problem/C
// Title: Divide by Three
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    // ll sum = 0;

    vector<int> mod1, mod2;

    for (int i = 0; i < s.length(); i++){
        // sum += s[i]-'0';
        if((s[i]-'0')%3 == 1) mod1.push_back(i);
        else if((s[i]-'0')%3 == 2) mod2.push_back(i);
    }

    int tam1 = mod1.size(), tam2 = mod2.size();

    if((tam1 + (tam2*2))%3 == 0){
        cout << s << "\n";
    }else if((tam1 + (tam2*2))%3 == 1){
        string t1 = s, t2 = s;

        if(t1.length() > 2 && tam2 > 1){
            t1.erase(t1.begin()+mod2.back());
            t1.erase(t1.begin()+mod2[tam2-2]);
            while(t1.length() > 1 && t1[0] == '0'){
                t1.erase(t1.begin());
            }
        }else t1 = "-1";

        if(t2.length() > 1 && tam1 > 0){
            t2.erase(t2.begin()+mod1.back());
            // t2.erase(t2.begin()+mod1[tam1-2]);
            while(t2.length() > 1 && t2[0] == '0'){
                t2.erase(t2.begin());
            }
        }else t2 = "-1";

        if(t1 == "-1" && t2 == "-1"){
            cout << "-1\n";
        }else if(t1 == "-1"){
            cout << t2 << "\n";
        }else if(t2 == "-1"){
            cout << t1 << "\n";
        }else{
            if(t1.length() > t2.length()){
                cout << t1 << "\n";
            }else{
                cout << t2 << "\n";
            }
        }
    }else{
        string t1 = s, t2 = s;

        if(t1.length() > 1 && tam2 > 0){
            t1.erase(t1.begin()+mod2.back());
            while(t1.length() > 1 && t1[0] == '0'){
                t1.erase(t1.begin());
            }
        }else t1 = "-1";

        if(t2.length() > 2 && tam1 > 1){
            t2.erase(t2.begin()+mod1.back());
            t2.erase(t2.begin()+mod1[tam1-2]);
            while(t2.length() > 1 && t2[0] == '0'){
                t2.erase(t2.begin());
            }
        }else t2 = "-1";

        if(t1 == "-1" && t2 == "-1"){
            cout << "-1\n";
        }else if(t1 == "-1"){
            cout << t2 << "\n";
        }else if(t2 == "-1"){
            cout << t1 << "\n";
        }else{
            if(t1.length() > t2.length()){
                cout << t1 << "\n";
            }else{
                cout << t2 << "\n";
            }
        }
    }
    

    // cout << "-1\n";

    return 0;
}