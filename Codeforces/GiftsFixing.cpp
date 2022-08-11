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
    int n,t;
    cin >> t;
    rep(j,t){
        cin >> n;
        ll int m=0,lox=2000000000,loy=2000000000;
        vector<ll int> x(n);
        vector<ll int> y(n);
        rep(i,n){
            cin >> x[i];
            lox=min(lox,x[i]);
        }
        rep(i,n){
            cin >> y[i];
            loy=min(loy,y[i]);
        }
        while(1){
            bool same=true;
            rep(i,n-1){

                if(x[i]!=x[i+1]){
                    same=false;
                    break;
                }
                else if(y[i]!=y[i+1]){
                    same = false;
                    break;
                }
            }
            if(same){
                break;
            }
            rep(i,n){
                //cout <<x[i]<<" "<<y[i]<<" ";
                if(x[i]>lox && y[i]>loy){
                    int difx=x[i]-lox, dify=y[i]-loy;
                    m+=min(difx,dify);
                    x[i]-=min(difx,dify);
                    y[i]-=min(difx,dify);

                }
                else if(x[i]>lox){
                    m+=x[i]-lox;
                    x[i]-=x[i]-lox;

                }
                else if(y[i]>loy){
                    m+=y[i]-loy;
                    y[i]-=y[i]-loy;

                }
                //cout <<x[i]<<" "<<y[i]<<"|"<<m<<"\n";
            }
        }
        cout << m <<endl;

    }
}

