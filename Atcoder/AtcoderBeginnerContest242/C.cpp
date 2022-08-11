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
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<long long int> x={2,3,3,3,3,3,3,3,2};
vector<long long int> y;
    int n;
    ll int cnt=0,mod=998244353;
    cin >>n;
    if(n==2){
        rep(i,9){
            cnt+=x[i];
        }
    }
    else{
        for(int i=0; i < n-2;i++){
            y={};
            rep(j,9){
                if(j==0)
                    y.push_back((x[0]+x[1])%998244353);
                else if(j==8)
                    y.push_back((x[8]+x[7])%998244353);
                else
                    y.push_back((x[j-1]+x[j]+x[j+1])%998244353);
            }
            x=y;
        }
        rep(i,9){
            cnt=(cnt+y[i])%998244353;
        }
    }
    cout << cnt <<endl;
}


