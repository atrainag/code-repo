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
    string s;
    cin >> s;
    int a=0,b=0,c=0,d=0;
    rep(i,s.size()){
        if(s[i]=='N')a=1;
        if(s[i]=='W')b=1;
        if(s[i]=='S')c=1;
        if(s[i]=='E')d=1;
    }
   // cout << a << b <<c <<d <<endl;
    if(a==c && b==d)cout <<"Yes\n";
    else cout <<"No\n";

}


