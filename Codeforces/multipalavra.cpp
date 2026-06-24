//https://codeforces.com/gym/106598/problem/M
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int p, q; cin >> p >> q;

    

    if(s.size() == t.size()){
        if(s < t){
            cout << '<' << endl;
        }else if(s > t){
            cout << '>' << endl;
        }else{
            cout << '=' << endl;
        }
    }else if(s.size() < t.size()){
        s.append(t.substr(0, t.size()-s.size()));
        if(s < t){
            cout << '<' << endl;
        }else if(s > t){
            cout << '>' << endl;
        }else{
            cout << '=' << endl;
        }
    }else{
        t.append(t.substr(0, s.size()-t.size()));
        if(s < t){
            cout << '<' << endl;
        }else if(s > t){
            cout << '>' << endl;
        }else{
            cout << '=' << endl;
        }
    }
    // }else if(s.size() < t.size()){
    //     int ini = 0, fim = s.size();
    //     string temp = t.substr(ini, fim);
    //     while(ini < t.size() && s == temp){
    //         // cout << temp << endl;
    //         ini = fim;
    //         fim = fim+s.size();
    //         temp = t.substr(ini, fim);
    //     }

    //     if(ini >= t.size()){
    //         cout << '=' << endl;
    //     }else if(s < temp){
    //         cout << '<' << endl;
    //     }else{
    //         cout << '>' << endl;
    //     }
    // }else{
    //     int ini = 0, fim = t.size()-1;
    //     string temp = s.substr(ini, fim);
    //     while(ini < s.size() && t == temp){
    //         ini = fim+1;
    //         fim = fim+t.size();
    //         temp = s.substr(ini, fim);
    //     }

    //     if(ini >= s.size()){
    //         cout << '=' << endl;
    //     }else if(t < temp){
    //         cout << '>' << endl;
    //     }else{
    //         cout << '<' << endl;
    //     }
    // }


}