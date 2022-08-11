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
    cin >> n;
    rep(i,n){
        cin >> t;
        vector<int> x(t);
        vector<int> y(t);
        rep(j,t){
            cin >> x[j];
        }
        y=x;
        sort(x.begin(),x.end());

        if(x[0]!=x[1]){
            rep(j,t){
                if(y[j]==x[0]){
                    cout << j +1<<endl;
                    break;
                }
            }
        }
        else{
            rep(j,t){
                if(y[j]==x[x.size()-1]){
                    cout << j+1  <<endl;
                    break;
                }
            }
        }


    }
}

