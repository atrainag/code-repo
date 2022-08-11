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
    int n=4,cn=0;
    vector<int> x(n);
    rep(i,4){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    rep(i,3){
        if(x[i]==x[i+1]){
            cn++;
        }
    }
    cout << cn<<endl;
}
