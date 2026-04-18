//https://judge.beecrowd.com/pt/problems/view/1661
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    while(n != 0){
        vector<long long int> v(n);
        vector<long long int> pos;
        vector<long long int> neg;
        for (long long int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] > 0) pos.push_back(i);
            else neg.push_back(i);
        }
        long long int sum = 0;
        while(!pos.empty() && !neg.empty()){
            long long int valorNeg = -v[neg.back()];
            long long int valorPos = v[pos.back()];

            if(valorNeg == valorPos){
                sum += valorPos*(abs(neg.back()-pos.back()));
                neg.pop_back();
                pos.pop_back();
            }else if(valorNeg > valorPos){
                sum += valorPos*(abs(neg.back()-pos.back()));
                v[neg.back()] += valorPos;
                pos.pop_back();
            }else{
                sum += valorNeg*(abs(neg.back()-pos.back()));
                v[pos.back()] -= valorNeg;
                neg.pop_back();
            }
        }
        
        cout << sum << endl;



        cin >> n;
    }
    return 0;
}