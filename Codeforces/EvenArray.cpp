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
        int sume=0,sumo=0;
        vector<int> x(t);
        rep(j,t){
            cin >> x[j];
            if(x[j]%2==0){
                sume++;
            }
            else{
                sumo++;
            }
        }

        if(t%2 ==0){
            int cnt=0;
            if(sume!=sumo){
                cout << -1<<endl;
            }
            else{
                rep(j,t){
                    if(j%2==0 && x[j]%2!=0){
                        cnt++;
                    }
                    else if(j%2!=0 && x[j]%2==0){
                        cnt++;
                    }
                }
                cout << cnt/2<<endl;
            }
        }
        else{
            if(sume-sumo!=1){
                cout << -1<<endl;
            }
            else{
                int cnt=0;
                rep(j,t){
                    if(j%2==0 && x[j]%2!=0){
                        cnt++;
                    }
                    else if(j%2!=0 && x[j]%2==0){
                        cnt++;
                    }
                }
                cout << cnt/2<<endl;
            }
        }
    }
}

