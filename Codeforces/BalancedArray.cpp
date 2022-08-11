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
    int n,x;
    cin >> n;
    rep(j,n){
        cin >> x;
        if(x%4!=0){
            cout <<"NO\n";
        }
        else{
            cout <<"YES\n";
            int sume=0,sumo=0,sz=x/2;
            rep(i,sz){
                cout<< 2*(i+1)<<" ";
                sume+=2*(i+1);
            }
            rep(i,sz){
                if(i==sz-1){
                    cout << sume-sumo<< " ";
                }
                else{
                    cout << (2*i+1)<<" ";
                    sumo+=2*i+1;
                }

            }
            cout <<"\n";

        }
    }
}

