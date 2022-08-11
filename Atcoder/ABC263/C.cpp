#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>
#include <string>
#include <cstring>

#define all(x) x.begin(),x.end()
#define last(x) x.size()-1
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define semoga using
#define bisa namespace
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}
int n,m;

void dfs(vector<int> x,vector<int> y,int d){
    if(y.size()==n){
        prtv(y);
    }
    else{
        for(int i=d;i<m;i++){
           // prtv(y);
           // cout <<"i:"<< i <<endl;
            if(find(y.begin(),y.end(),x[i])!=y.end()){
                continue;
            }
            vector<int> yy;
            yy=y;
            yy.push_back(x[i]);
            dfs(x,yy,i);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >>m;
    vector<int> x(m);
    rep(i,m){
        x[i]=i+1;
    }
    vector<int> y;
    dfs(x,y,0);
}




