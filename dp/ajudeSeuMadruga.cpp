//https://judge.beecrowd.com/pt/problems/view/19127
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, a;
    cin >> n >> a;
    while(n != 0 && a != 0){
        vector<int> valores(n);
        for (int i = 0; i < n; i++){
            cin >> valores[i];
        }
        
        sort(valores.rbegin(), valores.rend());

        vector<int> dp(valores[0]);
        dp[0] = 1;


        int cnt = 1;
        bool b = false;
        int i;

        if(dp[0] > a){
            cout << dp[0]-a << endl;
        }else if(dp[0] == a){
            cout << dp[0] << endl;
        }else{
            for (i = 1; i < valores[0]; i++){
                dp[i] = dp[i-1]+cnt;
                
                if(valores[0]-1-i < valores[cnt]){
                    dp[i]++;
                    cnt++;
                }

                if(dp[i] >= a) b = true; break;
            }

        }

        for (int i = 0; i < valores[0]; i++){
            cout << dp[i] << " ";
        }
        cout << endl;

        double ans;



        if(b){
            if(i == valores[0]-1){
                ans = -2;
            }else if(dp[i] == a){
                ans = valores[0]-1-i;
            }else{
                ans = ((dp[i]-a)/cnt)+(valores[0]-i);
            }

            
        }else{
            ans = -1;
        }

        if(ans == -1){
            cout << "-.-" << endl;
        }else if(ans == -2){
            cout << ":D" << endl;
        }else{
            cout << setprecision(4) << ans << endl;
        }

        cin >> n >> a;
    }
}