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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >>n>>k;
    vector<int> x(n);
    vector<int> y(k);
    vector<int> po;
    bool ans=false;
    int hi=-1;
    for(int i=0;i<n;i++){
        cin >>x[i];
        hi=max(hi,x[i]);
    }
    for(int i=0;i<n;i++){
        if(x[i]==hi){
            po.push_back(i+1);
        }
    }
    for(int i=0;i<k;i++){
        cin >> y[i];
        for(int j=0;j<po.size();j++){

            if(po[j]==y[i]){
                //cout <<po[j]<<endl;
                ans=true;
                break;
            }
        }
    }
    if(ans){
            cout<<"Yes\n";
        }
        else{
            cout <<"No\n";
        }
}


