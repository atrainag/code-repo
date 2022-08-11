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
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin >> t;
    repe(i,0,t){
        cin >> n;
        vector<int> x(n);
        if(n==1){
            cin >> x[i];
            cout <<"YES\n";
            continue;
        }
        rep(j,n){
            cin >> x[j];
        }
        sort(x.begin(),x.end());
        bool dupe = false;
        rep(j,n){
            if(j==n-1){
                if(abs(x[j]-x[j-1])<=1){
                    continue;
                }
                else if (x[j]!=x[j-1]&& abs(x[j]-x[j-1])!=1){
                    dupe=true;
                    break;
                }
            }
            else if(x[j]!=x[j+1] && abs(x[j]-x[j+1])<=1){
                continue;
            }
            else if(x[j]!=x[j+1] && abs(x[j]-x[j+1])!=1){
                dupe=true;
                break;
            }
        }
        if(!dupe){
            cout <<"YES\n";
        }
        else{cout <<"NO\n";}
    }

}

