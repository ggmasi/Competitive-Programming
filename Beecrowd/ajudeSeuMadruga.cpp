//https://judge.beecrowd.com/pt/problems/view/1912
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, a;
    cin >> n >> a;
    while(n != 0 && a != 0){
        vector<int> valores(n);
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin >> valores[i];
            sum += valores[i];
        }
        
        sort(valores.rbegin(), valores.rend());
        vector<double> dp(valores[0]);
        int cnt = 1;
        dp[0] = 1;
        
        for (int i = 1; i < n; i++){
            if(valores[i-1] == valores[i]){
                dp[0]++;
                cnt++;
            }else break;
        }


        if(sum == a){
            cout << ":D" << endl;
            cin >> n >> a;
            continue;
        }

        if(sum < a){
            cout << "-.-" << endl;
            cin >> n >> a;
            continue;
        }


        bool b = false;
        int i;

        if(dp[0] > a){
            cout << fixed << setprecision(4) << (double)(valores[0]-1)+(dp[0]-a)/cnt << endl;
            cin >> n >> a;
            continue;
        }else if(dp[0] == a){
            cout << fixed << setprecision(4) << (double)(valores[0]-1) << endl;
            cin >> n >> a;
            continue;
        }else{
            for (i = 1; i < valores[0]; i++){
                dp[i] = dp[i-1]+cnt;
                // cout << dp[i] << endl;
                if(valores[0]-1-i < valores[cnt] && cnt < n){
                    dp[i]++;
                    cnt++;
                    
                    while(cnt <= n-1 && valores[cnt] == valores[cnt-1]){
                        dp[i]++;
                        cnt++;
                    }
                }

                if(dp[i] >= a){
                    b = true; 
                    break;
                }
            }

        }

        // cout << b << endl;

        // for (int i = 0; i < valores[0]; i++){
        //     cout << dp[i] << " ";
        // }
        // cout << endl;

        double ans;



        if(b){
            if(i == valores[0]-1 && dp[i] == a){
                ans = -2;
            }else if(dp[i] == a){
                ans = valores[0]-1-i;
            }else{
                ans = (double)((dp[i]-a)/cnt)+(valores[0]-i-1);
            }

            
        }else{
            ans = -1;
        }

        if(ans == -1){
            cout << "-.-" << endl;
        }else if(ans == -2){
            cout << ":D" << endl;
        }else{
            cout << fixed << setprecision(4) << ans << endl;
        }

        cin >> n >> a;
    }
}