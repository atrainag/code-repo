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


ll int cntfct(ll int n,ll int  &dup){
    ll int d=1;
    ll int cnt=0;
    while(d<=sqrt(n)){
        if(n%d==0){
            if(n/d==d)dup++;
            cnt++;
        }
        d++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int n;
    cin >> n;
    ll int ans=0;
    //solv(n);
/*
    int dup=0;
    cout <<cntfct(n,dup);
    cout <<"\n"<<dup;
*/

    for(ll int i =1;i<n;i++){
        ll int dup1=0,dup2=0;
        ll int cnt1=cntfct(i,dup1);
        ll int cnt2=cntfct(n-i,dup2);
        //0cout << cnt1 <<" "<<dup1 <<" "<<cnt2 <<" "<<dup2<<endl;
        ans+= (2*(cnt1-dup1)+dup1)*(2*(cnt2-dup2)+dup2) ;
    }
    cout << ans <<endl;
}



