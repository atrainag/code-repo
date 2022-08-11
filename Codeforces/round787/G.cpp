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
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0 ; i<n ;i++){
        cin >> x[i];
    }
    bool ans=true;
    int tot=0;
    for(int i=0 ;i< n-1;i++){
        if(x[i]==0 && x[i+1]==0){
            ans=false;
            break;
        }
        if(x[i]>=x[i+1]){
            x[i]/=2;
            i=-1;
            tot++;
        }
/*
        for(int j =0 ; j < n;j++){
            cout <<x[j]<<" ";
        }
        cout <<"\n";
        */
    }
    if(ans){
        cout <<tot<<endl;
    }
    else{
        cout <<-1<<endl;
    }

}


