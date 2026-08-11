// url: https://codeforces.com/gym/106636/problem/C
// Title: Saving Space
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    string ans;

    ans.push_back(s[0]);

    int count = 1;
    for (int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            if(count > 1){
                string num = to_string(count);
                ans.append(num);
            }
            count = 1;
            ans.push_back(s[i]);
        }
    }

    if(count > 1){
        string num = to_string(count);
        ans.append(num);
    }

    cout << ans << "\n";
    
    
    return 0;
}