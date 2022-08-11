
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll int t;
    ll int s;
    ll int n;
    cin >> t;
    rep(i,t){
        cin >> n>>s;
        if(s==0){
            cout << s<<endl;
        }
        else if (s==1){
            if(n!=1){
                cout <<0<<endl;
            }
            else{cout << s<<endl;}
        }
        else{
            ll int y=n*n;
            cout << s/y<<endl;
        }
    }
}

