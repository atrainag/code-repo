//B
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define MAX 999999999
using namespace std;

int f(int n,int d){
    int i=0;
    int tem=1;
    while(1){
        tem=i*n+1;
        if(tem<=d) i++;
        else break;
    }
    return i;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,m;
    cin >> a >> b >>m;
    vector<int> re(a);
    vector<int> mi(b);
    vector<int> ree(m);
    vector<int> mii(m);
    vector<int> d(m);
    int lore=99999999,lomi=999999999;
    for(int i=0;i<a;i++){
        cin >> re[i];
        lore=min(lore,re[i]);
    }
    for(int i=0;i<b;i++){
        cin >> mi[i];
        lomi=min(lomi,mi[i]);
    }
    int lo=99999999,temp=0;
    for(int i=0;i<m;i++){
        cin >> ree[i]>> mii[i]>>d[i];
        temp=re[ree[i]-1]+mi[mii[i]-1]-d[i];
         //cout<<lo<<" "<<temp<<endl;
        if(lo>temp){
            lo=temp;
        }
    }

    lo=min(lo,lore+lomi);
    cout << lo <<endl;
}








