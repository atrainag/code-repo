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
    ll int x,a,d,n,ans=99999999999999999,l=1,r,temp=0,mid;
    cin >>x>>a>>d>>n;
    r=n;
    mid=(l+r)/2;
    temp=a+(mid-1)*d;
    ans=min(ans,abs(x-temp));
    while(l<r){


        if(x==temp){
            break;
        }
        if(d<0 && x>temp){
            r=mid-1;
        }
        else if(d<0 && x<temp){
            l=mid+1;
        }
        else if(x>temp){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        mid=(l+r)/2;
        temp=a+(mid-1)*d;
        //cout <<l<<" "<<r<<" "<< temp <<" "<<ans << " "<<x-temp<<endl;
        if(r>=l)
         ans=min(ans,abs(x-temp));
    }
    if(ans==99999999999999999)ans=0;
    cout << ans<<endl;
}


