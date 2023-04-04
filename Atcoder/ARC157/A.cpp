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
    ll int n,a,b,c,d;
    cin >> n >>a >> b >> c >>d;
    ll int ans=0;
    if(abs(b-c)>1){
        cout <<"No\n";
        return 0;
    }
    if(b==0 && c==0){
        if(a!=0 && d!=0){
            cout <<"No\n";
            return 0;
        }
        cout <<"Yes\n";
        return 0;
    }
    else if(b!=c){
        ans+=max(b,c)*2;
        ans+=a+d;
    }
    else{
        ans+=2*b+1;
        ans+=a+d;
    }
    //cout << ans <<endl;
    if(n==ans){
        cout <<"Yes\n";
    }
    else{
        cout <<"No\n";
    }
}


