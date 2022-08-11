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
    int n;
    cin >> n;
    string x;
    rep(i,n){
        vector<int> pos;
        char a;
        cin >> x>>a;
        rep(j,x.size()){
            if(x[j]==a){
                    //cout << x[j]<<" "<<a<<" "<<j <<endl;
                pos.push_back(j);
            }
        }
        bool yn=false;
        rep(j,pos.size()){

            if(pos[j]%2==0){
                yn=true;
                break;
            }
        }
        if(yn){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

