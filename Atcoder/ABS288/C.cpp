
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



int checkCycle (int i,int p,vector<vector<int>> &x,vector<int> &vis){
    cout <<"VIS"<<i<<endl;

    vis[i]++;
    int cnt=0;
    rep(j,vis.size()){
        if(vis[j]>1)cnt=1;
    }
    if(cnt)return 1;
    for(auto j : x[i]){
        if(p!=-1 && p==j)continue;
        checkCycle(j,i,x,vis);
    }
    int mx = -1;
    rep(j,vis.size()){
        if(vis[j]>mx)mx=vis[j];
    }
    if(mx==1)mx--;
    return mx;

}
/*
int ans=0;
void dfs(int i,vector<vector<int>> &x,vector<int> &vis){
    if(checkCycle(i,x,vis)){
        ans++;
        for(auto j : vis){
            if(j>1){

            }
        }
    }
}
*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n>>m;
    vector<vector<int>> x(n);
    vector<int> vis(n,0);
    for(int i =0;i<m;i++){
        int a,b;
        cin >> a >> b;
        x[a-1].push_back(b-1);
        x[b-1].push_back(a-1);
    }
    //dfs(0,x,vis);
    //cout << ans <<endl;
    cout << checkCycle(0,-1,x,vis)<<endl;
/*
    if(checkCycle(0,-1,x,vis)){
        cout << "Y"<<endl;
    }
    else cout <<"N"<<endl;*/
    for(auto j : vis)cout <<j<<endl;

}


