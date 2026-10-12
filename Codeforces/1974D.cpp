// url: https://codeforces.com/problemset/problem/1974/D
// Title: Ingenuity-2
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int vR = 0, hR = 0, vH = 0, hH = 0;
        bool usouR = false, usouH = false;
        string ans;
        for(auto x : s){
            if(x == 'N'){
                if(vR < vH){
                    vR++;
                    ans.push_back('R');
                    usouR = true;
                }else if(vR > vH){
                    vH++;
                    ans.push_back('H');
                    usouH = true;
                }else{
                    if(!usouR){
                        vR++;
                        ans.push_back('R');
                        usouR = true;
                    }else{
                        vH++;
                        ans.push_back('H');
                        usouH = true;
                    }
                }
            }else if(x == 'S'){
                if(vR > vH){
                    vR--;
                    ans.push_back('R');
                    usouR = true;
                }else if(vR < vH){
                    vH--;
                    ans.push_back('H');
                    usouH = true;
                }else{
                    if(!usouR){
                        vR--;
                        ans.push_back('R');
                        usouR = true;
                    }else{
                        vH--;
                        ans.push_back('H');
                        usouH = true;
                    }
                }
            }else if(x == 'E'){
                if(hR < hH){
                    hR++;
                    ans.push_back('R');
                    usouR = true;
                }else if(hR > hH){
                    hH++;
                    ans.push_back('H');
                    usouH = true;
                }else{
                    if(!usouR){
                        hR++;
                        ans.push_back('R');
                        usouR = true;
                    }else{
                        hH++;
                        ans.push_back('H');
                        usouH = true;
                    }
                }
            }else{
                if(hR > hH){
                    hR--;
                    ans.push_back('R');
                    usouR = true;
                }else if(hR < hH){
                    hH--;
                    ans.push_back('H');
                    usouH = true;
                }else{
                    if(!usouR){
                        hR--;
                        ans.push_back('R');
                        usouR = true;
                    }else{
                        hH--;
                        ans.push_back('H');
                        usouH = true;
                    }
                }
            }
        }

        if(vR == vH && hR == hH && usouH && usouR){
            cout << ans << "\n";
        }else{
            cout << "NO\n";
        }

    }
    
    return 0;
}