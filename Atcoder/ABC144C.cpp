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

int  f(ll int x){
    int d=2,a=-1;
    while(d<=sqrtl(x)){
        if(x%d==0){
            a=d;
        }
        d++;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int n,t=1000000,a=0,b=0;
    cin >> n;
    a=f(n);
    if(a==-1)a= n;
    b=n/a;
    //cout << a <<" "<<b <<endl;
    cout << a+b-2<<endl;
}


