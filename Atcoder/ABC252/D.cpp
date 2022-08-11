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
#define menang std;

semoga bisa menang

int cnt=0,run=0;

void dfs(vector<int> x,vector<int> sol,int idx){
    if(sol.size()==3){
/*
        for(int i=0;i<3;i++){
            cout << sol[i]<<" ";
        }
        cout <<"\n";*/

        cnt++;
        return;
    }
    int temp=2-sol.size();
    if(temp<0)temp=0;
    for(int i=idx+1;i<x.size()-temp;i++){
        vector<int> t=sol;
        run++;
        if(find(t.begin(),t.end(),x[i])==t.end()){
            t.push_back(x[i]);
            dfs(x,t,i);
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> x(n);
    rep(i,n){
        cin >> x[i];
    }
    vector<int> sol;
    dfs(x,sol,-1);
    cout << cnt<<" "<<run<<
    endl;
}



