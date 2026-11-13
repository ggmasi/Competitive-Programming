    // url: https://www.codechef.com/problems/CHPWR
    // Title: Champagne Tower
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define pii pair<int, int>

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        
        double p; cin >> p;
        int r, c; cin >> r >> c;
        
        vector<vector<double>> v(100, vector<double>(100, 0.0));
        v[0][0] = p;
        for(int i = 1; i <= r; i++){
            for(int j = 0; j < i+1; j++){
                if(j < i && v[i-1][j] > 1){
                    v[i][j] = (v[i-1][j]-1)/2;
                }
                if(j > 0 && v[i-1][j-1] > 1){
                    v[i][j] += (v[i-1][j-1]-1)/2; 
                }
                
            //    cout << v[i][j] << " ";
            }
            // cout << endl;
        }

        if(v[r][c] > 1) v[r][c] = 1;

        cout << fixed << setprecision(5) << v[r][c] << "\n";
        return 0;
    }