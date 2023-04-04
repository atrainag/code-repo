
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

long long int ans=0;

void dfs(vector<vector<int>> &x,vector<int> his,int i,int j){
    //cout << i <<" "<< j <<endl;

    for(int k = 0;k<his.size();k++){
        if(x[i][j]==his[k]){
            return;
        }
    }
    if(i==x.size()-1 && j==x[0].size()-1 ){
        ans++;
        return;
    }
    his.push_back(x[i][j]);
    if(i+1<=x.size()-1){
        dfs(x,his,i+1,j);
    }
    if(j+1<=x[0].size()-1){
        dfs(x,his,i,j+1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,w;
    cin >> h >> w;
    vector<vector<int>> x(h,vector<int>(w));
    for(int i =0;i<h;i++){
        for(int j =0;j<w;j++){
            cin >> x[i][j];
        }
    }
    vector<int> his;
    dfs(x,his,0,0);
    cout << ans <<endl;
}



