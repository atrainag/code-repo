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
    int t,n,d;
    cin >> t;
    rep(j,t){
        cin >> n >>d;
        vector<int> x(n);
        vector<int> dif;
        int miu;
        bool bomb=false;
        rep(i,n-1){
            cin >>x[i];
            if(i==0){
                miu=x[i]-1;
                dif.push_back(x[i]-1);
            }
            else{
                int bmiu=miu;
                miu=min(miu,x[i]-x[i-1]-1);
                if(x[i]-x[i-1]-1==bmiu) bomb=true;
                dif.push_back(x[i]-x[i-1]-1);
            }

        }
        rep(i,dif.size()-1){
            if(dif[i]==miu && dif[i]==dif[i-1]){
                if(x[i+1]!=d){
                    miu=min(x[i+1]-x[i],d-x[x.size()-1]);
                    break;
                }
            }
            else if (dif[i]==miu && !bomb){

            }
        }
        cout << miu;

    }
}

