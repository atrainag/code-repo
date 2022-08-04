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
    ll int a,b,c,ha,hb,hc,i=0,ta,tb,tc;
    cin >> a>>b>>c;
    ta=a;
    tb=b;
    tc=c;
    if(a%2==0 && b%2==0 && c%2==0){
        while(a%2==0 && b%2==0 && c%2==0){
            ha=a/2;
            hb=b/2;
            hc=c/2;
            a=hb+hc;
            b=ha+hc;
            c=ha+hb;
            //cout << a<<" "<<b<<" "<<c<<endl;;
            i++;
            if(ta==a && tb==b && tc==c){
                i=-1;
                break;
            }
            ta=a;
            tb=b;
            tc=c;
        }
        cout << i <<endl;
    }
    else{
        cout<<0 <<endl;
    }

}

