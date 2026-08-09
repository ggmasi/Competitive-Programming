// url: https://codeforces.com/contest/614/problem/B
// Title: Genas Code
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    string ans = "00";
    int numZeros = 0;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        if(s == "0"){
            ans = "0";
        }else if(ans == "00"){
            if(s[0] != '1'){
                ans = s;
                continue;
            }
            int numTemp = 0;
            for (int i = 1; i < s.length(); i++){
                if(s[i] == '0') numTemp++;
                else{
                    ans = s;
                    break;
                }
            }
            if(ans == "00"){
                numZeros += numTemp;
            }
        }else{
            numZeros += s.length()-1;
        }

    }
    
    if(ans == "0"){
        cout << "0\n";
    }else{
        if(ans == "00") ans = "1";
        ans.append(numZeros, '0');
        cout << ans << "\n";
    }
    return 0;
}