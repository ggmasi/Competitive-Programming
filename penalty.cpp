#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int minA[5], minB[5], maxA[5], maxB[5];

        if(s[0] == '1'){
            minA[0] = 1;
            maxA[0] = 1;
        }else if(s[0] == '0'){
            minA[0] = 0;
            maxA[0] = 0;
        }else{
            minA[0] = 0;
            maxA[0] = 1;
        }

        if(s[1] == '1'){
            minB[0] = 1;
            maxB[0] = 1;
        }else if(s[1] == '0'){
            minB[0] = 0;
            maxB[0] = 0;
        }else{
            minB[0] = 0;
            maxB[0] = 1;
        }

        for (int i = 2; i < 10; i++){
            if(i%2 == 0){
                if(s[i] == '1'){
                    minA[i/2] = minA[i-2]+1;
                    maxA[i/2] = maxA[i-2]+1;
                }else if(s[i] == '?'){
                    minA[i/2] = minA[i-2];
                    maxA[i/2] = maxA[i-2]+1;
                }else{
                    minA[i/2] = minA[i-2];
                    maxA[i/2] = maxA[i-2];
                }
            }else{
                if(s[i] == '1'){
                    minB[(i/2)+1] = minB[i-2]+1;
                    maxB[(i/2)+1] = maxB[i-2]+1;
                }else if(s[i] == '?'){
                    minB[(i/2)+1] = minB[i-2];
                    maxB[(i/2)+1] = maxB[i-2]+1;
                }else{
                    minB[(i/2)+1] = minB[i-2];
                    maxB[(i/2)+1] = maxB[i-2];
                }
            }
        }
        
        for (int i = 0; i < 5; i++){
            if(maxA[i]-minB[i] >= 5-i){
                cout << (i*2)+1 << endl;
                return 0;
            }else if(maxB[i]-minA[i] >= 5-i){
                cout << (i*2)+2 << endl;
                return 0;
            }
        }
        


    }
}