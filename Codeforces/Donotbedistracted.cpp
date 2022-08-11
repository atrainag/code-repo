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
    int n,len;
    string x;
    cin >> n;

    rep(i,n){
        cin >> len >> x;
        char idx=x[0];
        bool sus=false;
        map<char,int> chk;
        chk[idx]=1;
        rep(j,len){
            if(x[j]!=idx){
                //cout << x[j]<<" "<<chk[x[j]]<<endl;
                if(chk[x[j]]==1){
                    sus=true;
                    break;
                }
                else{
                    //cout << chk[x[j]]<<" ";
                    chk[x[j]]=1;
                    idx=x[j];
                    //cout <<chk[x[j]]<<endl;
                }
            }
        }
        if(!sus){
            cout <<"YES\n";
        }
        else{
            cout <<"NO\n";
        }
    }
}

