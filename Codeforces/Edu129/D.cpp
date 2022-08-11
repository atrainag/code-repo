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

int f(string x){
    int ma=-1;
    for(int i=0;i<x.size();i++){
        ma=max(ma,(x[i]-'0'));
    }
    return ma;
}
int ff(int maxd,string x){
    int ma=-1;
    for(int i=0;i<x.size();i++){
        if(x[i]<maxd) ma=max(ma,(x[i]-'0'));
    }
    return ma;
}

int len(ll int x){
    int i=0;
    while(x>0){
        x/=10;
        i++;
    }
    return i;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int n,x;
    int ans=0;
    cin >> n>>x;
    if(len(x)==n){
        cout <<ans<<endl;
    }
    else if(len(x)>n || f(to_string(x))==1){
        cout <<-1<<endl;
    }
    else{
        ll int maxd=f(to_string(x)),hd=x/pow(10,len(x)-1);
        while(1){

            ll int tem=maxd,temp = x*maxd,temphd = (x*maxd)/pow(10,len(x*maxd)-1) ;
            cout <<x <<" "<<ans<<" "<<len(x)<<" "<<temphd<<endl;
            if( temphd==1){
                int prev=len(temp);
                while( (temphd==1  || prev<len(temp) )&& maxd!=-1){
                    maxd=ff(maxd,to_string(x));
                    temp = x*maxd;
                    temphd = (x*maxd)/pow(10,len(x*maxd)-1) ;
                }
            }
            if(maxd==-1){
                x*=tem;
            }
            else x*=maxd;
            maxd=f(to_string(x));
            ans++;
            if(len(x)>=n){
                break;
            }

        }
        cout << ans<<endl;
    }
}

