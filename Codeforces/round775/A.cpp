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
    rep(i,t){
        cin >> n;
        int c=0;
        vector<int> x(n);
        vector<int> pos;
        rep(j,n){
            cin >> x[j];
            if(x[j]==0){
                pos.push_back(j);
            }
        }
        if(pos.size()>1){
            cout << pos[pos.size()-1]-pos[0]+2<<endl;
        }
        else if (pos.size()==1){
            cout << 2<<endl;
        }
        else{
            cout << 0 <<endl;
        }
    }
}

