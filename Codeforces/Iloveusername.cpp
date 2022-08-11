#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,a,n) for(int i=a ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,hi=-1,lo=10000000,cnt=0;
    cin >> n;
    vector<int> x(n);
    rep(i,0,n){
        cin >> x[i];
    }
    hi=x[0];
    rep(i,1,n){
        //cout << hi <<" "<<lo<<" "<<cnt<<endl;
        if(x[i]>hi){
            if(i==1){
                lo=hi;
            }
            hi=x[i];
            cnt+=1;
        }
        else if(x[i]<lo && x[i]!=hi){
            lo=x[i];
            cnt+=1;
        }
        //cout << hi <<" "<<lo<<" "<<cnt<<endl;
    }
    cout << cnt<<endl;
}

