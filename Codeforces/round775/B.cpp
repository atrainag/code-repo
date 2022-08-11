#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

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
    ll int n,t,sum=0,zer=1;
    cin >> t;
    rep(i,t){
        cin >> n;
        vector<ll int> x(n);
        rep(j,n){
            cin >> x[i];
            sum +=x[i];
            if(x[i]!=0){
                zer=0;
            }
        }
        if(zer){
            cout <<0<<endl;
        }
        else if(sum%2==0){
            cout << 1;
        }
        else{
            cout <<2<<endl;
        }

    }
}

