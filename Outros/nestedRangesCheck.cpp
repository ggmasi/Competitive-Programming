//https://cses.fi/problemset/task/2168
#include <bits/stdc++.h>
using namespace std;

struct Range{
    int x, y, id;
    int contem = 0;
    int contido = 0;
};

bool compare(Range a, Range b){
    if(a.x != b.x) return a.x < b.x;
    return a.y > b.y;
}

bool compareID(Range a, Range b){
    return a.id < b.id;
}

int main(){
    int n; cin >> n;
    vector<Range> r(n);
    for (int i = 0; i < n; i++){
        cin >> r[i].x >> r[i].y;
        r[i].id = i;
    }
    sort(r.begin(), r.end(), compare);
    int maxY = r[0].y;
    for (int i = 1; i < n; i++){
        if(r[i].y <= maxY){
            r[i].contido = 1;
        }else{
            maxY = r[i].y;
        }
    }
    
    int minY = r[n-1].y;
    for (int i = n-2; i >= 0; i--){
        if(r[i].y >= minY){
            r[i].contem = 1;
        }else{
            minY = r[i].y;
        }
    }

    sort(r.begin(), r.end(), compareID);

    for (int i = 0; i < n; i++){
        cout << r[i].contem << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << r[i].contido << " ";
    }
    return 0;
}