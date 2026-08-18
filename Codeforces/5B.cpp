// url: https://codeforces.com/problemset/problem/5/B
// Title: Center Alignment
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<string> v;

    string s;
    int maior = 0;
    while(getline(cin, s)){
        v.push_back(s);
        if(s.length() > maior) maior = s.length();
    }

    for (int i = 0; i < maior+2; i++){
        cout << "*";
    }
    
    bool lado = true;
    for (int i = 0; i < v.size(); i++){
        cout << "\n*";
        int diff = (maior-v[i].length())/2;
        if((maior-v[i].length())%2 == 0){
            for (int i = 0; i < diff; i++){
                cout << " ";
            }
            cout << v[i];
            for (int i = 0; i < diff; i++){
                cout << " ";
            }
            
        }else{
            if(!lado){
                diff++;
                lado = true;

                for (int i = 0; i < diff; i++){
                    cout << " ";
                }
                cout << v[i];
                diff--;
                for (int i = 0; i < diff; i++){
                    cout << " ";
                }
            }else{
                lado = false;

                for (int i = 0; i < diff; i++){
                    cout << " ";
                }
                cout << v[i];
                diff++;
                for (int i = 0; i < diff; i++){
                    cout << " ";
                }
                
            }
        }
        cout << "*";
    }
    cout << "\n";
    for (int i = 0; i < maior+2; i++){
        cout << "*";
    }
    

    return 0;
}