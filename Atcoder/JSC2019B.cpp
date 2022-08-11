#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>
#include <string>
#include <cstring>

#define all(x) x.begin(),x.end()
#define last(x) x.size()-1
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
    ll int n,k;
    cin >>n>>k;
    vector<ll int> x(n);
    for(int i =0;i<n;i++){
        cin >> x[i];
    }
    vector<ll int> r(n);
    vector<ll int> l(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            else if(i<j && x[i]>x[j]){
                r[i]++;
            }
            else if(i>j && x[i]>x[j]){
                l[i]++;
            }
        }
    }
    long long int ans=0,mod=1000000007;
    for(int i=0;i<n;i++){
        ans+=(r[i])*((((k+1)*(k))/2)%mod);
        ans+=(l[i])*((((k-1)*k)/2)%mod);
        ans%=mod;
    }
    cout << ans <<endl;
}

//Very inefficient
