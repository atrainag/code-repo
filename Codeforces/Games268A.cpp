#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>

#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)

using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n){
        cin >> x[i]>>y[i];
    }
    int cnt=0;
    rep(i,n){
        rep(j,n){
            if(x[i]==y[j]){
                cnt++;
            }
        }
    }
    cout<< cnt<<endl;
}

