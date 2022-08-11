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
    ll int n,l,r,a;
    cin >> n;
    rep(i,n){
        cin >> l >> r >>a;
        ll int b=l%a,c=r%a;
        if( (r+1)%a==0){
            cout << r/a+r%a<<endl;
        }
        else if(r-(c+1)>=l){
            //cout << r-(c+1)<<endl;
            cout << (r-(c+1))/a + (r-(c+1))%a<<endl;
        }
        else{
            //cout << r <<endl;
            cout <<  r/a + r%a<<endl;
        }
    }
}

