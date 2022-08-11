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

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,x,y;
    cin >> a >> b >>c >>x >> y;
    int l=0,m=0,n=0;
    m+=min(x,y)*c*2;
    if(x>y){
        m+=a*(x-y);
    }
    else {
        m+=b*(y-x);
    }
    l+=max(x,y)*c*2;

    n+=x*a+y*b;

    cout << min({l,m,n}) <<endl;
}
