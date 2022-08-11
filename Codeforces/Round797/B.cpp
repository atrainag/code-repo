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
#define menang std;

semoga bisa menang

void prtv(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    cin >>t;
    while(t--){
        ll int n;
        cin >> n;
        vector<ll int> x(n);
        vector<ll int> y(n);
        rep(i,n){
            cin >> x[i];
        }
        ll int ans=1;
        ll int dif=0,difzer=0,fi=1;
        rep(i,n){
            cin >> y[i];
        }
        rep(i,n){
            if(fi==1 && y[i]!=0){
                dif=(x[i]-y[i]);
                if(dif<0){
                    ans=0;
                }
                fi=0;
            }
            else if(y[i]==0){
                difzer=max(difzer,x[i]-y[i]);
            }
            else if(y[i]!=0){
               // cout<<dif<<" "<<x[i]-y[i]<<endl;
                if(dif!=(x[i]-y[i])|| (x[i]-y[i])<0){
                    ans=0;
                }
                dif=(x[i]-y[i]);
            }
        }
        if(difzer>dif && dif!=0){
            ans=0;
        }
        if(ans) cout <<"YES\n";
        else cout <<"NO\n";
    }

}
