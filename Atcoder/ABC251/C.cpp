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

map<string,bool> visited;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    vector<string> x(t);
    vector<int> y(t);
    int hi=-1,pos=0;
    for(int i=0;i<t;i++){
        cin >> x[i]>>y[i];

        if(y[i]>hi && visited[x[i]]==false){
            //cout << pos <<endl;
            hi=y[i];
            pos=i;
        }
        if(visited[x[i]]!=true){
            visited[x[i]]=true;
        }
    }
    cout << pos+1 <<endl;

}

