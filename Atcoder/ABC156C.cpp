#include <vector>
#include <iostream>
#include <algorithm>

#define rep(i,n) for(int i =0 ; i < n ;i++)

using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> x(n);
    int hi = -1;
    rep(i,n){
        cin >> x[i];
        if(x[i]>hi){
            hi = x[i];
        }
    }
    int tot;
    vector<int> y;
    for(int i = 1 ; i <= hi ; i++){
        tot = 0 ;
        rep(j,n){
            tot += abs(x[j]-i)*abs(x[j]-i);
        }
        y.push_back(tot);
    }
    sort(y.begin(),y.end());
    cout << y[0];
}
