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
    int t,n;
    cin >>t;
    rep(j,t){
        cin >>n;
        vector<int> x(n);
        int c1=0,c2=0;
        rep(i,n){
            cin >>x[i];
            if(x[i]==1){
                c1++;
            }
            else if(x[i]==2){
                c2++;
            }
        }
        if(c2%2==0){
            if(c1%2==0){
                cout << "YES\n";
            }
            else{
                cout <<"NO\n";
            }
        }
        else{
            if(c1%2==0 && c1!=0){
                cout <<"YES\n";
            }

            else{
                cout <<"NO\n";
            }
        }
    }
}

