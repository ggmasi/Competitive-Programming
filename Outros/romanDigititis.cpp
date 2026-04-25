//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=280
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> m(5, vector<int>(101, 0));
    for (int j = 1; j <= 100; j++){
        int idx = j;
        int i = 0, v = 0, x = 0, l = 0, c = 0;
        if(idx == 100){
            c++;
            idx -= 100;
        }else if(idx >= 90 && idx <= 99){
            c++;
            x++;
            idx -= 90;
        }else if(idx >= 80 && idx <= 89){
            l++;
            x+=3;
            idx -= 80;
        }else if(idx >= 70 && idx <= 79){
            l++;
            x+=2;
            idx -= 70;
        }else if(idx >= 60 && idx <= 69){
            l++;
            x++;
            idx -= 60;
        }else if(idx >= 50 && idx <= 59){
            l++;
            idx -= 50;
        }else if(idx >= 40 && idx <= 49){
            l++;
            x++;
            idx -= 40;
        }else if(idx >= 30 && idx <= 39){
            x+=3;
            idx -= 30;
        }else if(idx >= 20 && idx <= 29){
            x+=2;
            idx -= 20;
        }else if(idx >= 10 && idx <= 19){
            x++;
            idx -= 10;
        }
        
        if(idx == 1) i++;
        else if(idx == 2) i += 2;
        else if(idx == 3) i += 3;
        else if(idx == 4 || idx == 6){
            i++;
            v++;
        }else if(idx == 5) v++;
        else if(idx == 7){
            v++;
            i+=2;
        }
        else if(idx == 8){
            v++;
            i+=3;
        }else if(idx == 9){
            x++;
            i++;
        }


        m[0][j] = m[0][j-1]+i;
        m[1][j] = m[1][j-1]+v;
        m[2][j] = m[2][j-1]+x;
        m[3][j] = m[3][j-1]+l;
        m[4][j] = m[4][j-1]+c;
    }
    
    int n; cin >> n;
    while(n != 0){
        cout << n << ": " << m[0][n] << " i, " << m[1][n] << " v, " << m[2][n] << " x, " << m[3][n] << " l, " <<  m[4][n] << " c\n"; 

        cin >> n;
    }

    
}