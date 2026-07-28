//https://codeforces.com/problemset/problem/1486/C1
#include <bits/stdc++.h>
using namespace std;

int query(int l, int r){
    if(l >= r) return -1;
    cout << "? " << l << " " << r << endl;
    int ans; cin >> ans;
    return ans;
}

int main(){
    int n; cin >> n;

    int pos = query(1, n);


    if(pos == 1 || (pos != n && query(1, pos) != pos)){
        int l = pos+1, r = n, ans = pos+1;
        while(l <= r){
            int mid = (l+r)/2;

            if(query(pos, mid) == pos){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout << "! " << ans << endl;
    }else{
        int l = 1, r = pos-1, ans = pos-1;
        while(l <= r){
            int mid = (l+r)/2;
            if(query(mid, pos) == pos){
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        cout << "! " << ans << endl;
    }

    return 0;
}