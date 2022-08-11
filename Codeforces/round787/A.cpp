
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >>b >> c >>d >>e;
        bool cat=false,dog=false;
        if(a>=d){
            dog=true;
        }
        else if(a+c>=d){
            c-=(d-a);
            dog=true;
        }
        if(b>=e){
            cat=true;
        }
        else if(b+c>=e){
            cat=true;
        }
        if(cat && dog){
            cout <<"YES\n";
        }
        else{cout <<"NO\n";}
    }
}
