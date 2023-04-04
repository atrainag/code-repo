
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
vector<vector<int>> x(0);
vector<int> vis(0);
int n;
void check(int g){
    if(vis[g]==1)return;
    vis[g]=1;
    for(int i=0;i<x[g].size();i++){
        check(x[g][i]);
    }
    return;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin >> n >> m;
    for(int i =0;i<n;i++){
        vector<int> temp(0);
        x.push_back(temp);
        vis.push_back(0);
    }
    for(int i =0;i<m;i++){
        int a,b;
        cin >>a >>b;
        x[a-1].push_back(b-1);
        x[b-1].push_back(a-1);
    }
    if(n!=m+1){
        cout << "No\n";
        return 0;
    }
    int on=0,to=0;
    for(int i =0;i<n;i++){
        if(x[i].size()==1)on++;
        else if(x[i].size()==2)to++;
    }
    if(on==2 && to==n-2){
        check(0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]==1){
                cnt++;
            }
        }
        if(cnt==n){
            cout <<"Yes\n";
        }
        else cout <<"No\n";
    }
    else cout <<"No\n";
}

