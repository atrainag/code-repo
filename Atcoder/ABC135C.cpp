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
#define semoga using
#define bisa namespace
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll int> a(n+1);
    vector<ll int> b(n);
    for(int i=0;i<n+1;i++){
        cin >> a[i];
    }for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ll int ans=0;
    rep(i,n){
        if(b[i]>=a[i]){
            b[i]-=a[i];
            ans+=a[i];
            a[i]=0;
        }
        else{
            ans+=b[i];
            a[i]-=b[i];
            b[i]=0;
        }
        if(b[i]>=a[i+1]){
            b[i]-=a[i+1];
            ans+=a[i+1];
            a[i+1]=0;
        }
        else{
            ans+=b[i];
            a[i+1]-=b[i];
            b[i]=0;
        }
       // cout << ans <<endl;
    }
    cout << ans <<endl;
}




