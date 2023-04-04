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



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,x;
    cin >> n >>q;
    vi vis(n+1  ,0);
    for(int i =0;i<q;i++){
        int a;
        cin >> a >> x;
        if(a==1)vis[x]+=1;
        else if(a==2) vis[x]+=10;
        else {
            //cout << vis[x]<<endl;
            if(vis[x]==2 || vis[x]>=10){
                cout <<"Yes\n";
            }
            else cout <<"No\n";
        }
    }
}



