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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,w;
    cin >>n>>w;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >>x[i];
    }
    int ans=0;
    vector<int> visited(w+1);
    for(int i=0;i<n;i++){
        if(x[i]<=w){
            if(visited[x[i]]!=1){
                visited[x[i]]=1;
                //cout << x[i]<<endl;
                ans++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(x[i]+x[j]<=w){
                if(visited[x[i]+x[j]]!=1){
                visited[x[i]+x[j]]=1;
                //cout << x[i]<<endl;
                ans++;
            }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(x[i]+x[j]+x[k]<=w){
                    if(visited[x[i]+x[j]+x[k]]!=1){
                        visited[x[i]+x[j]+x[k]]=1;
                        //cout << x[i]<<endl;
                        ans++;
                    }
                }

            }
        }
    }
    cout << ans <<endl;

}


