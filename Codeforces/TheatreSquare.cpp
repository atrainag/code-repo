
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

int ans=0;
void analyze(int n,int m,int a){
   // cout << n << " "<<m<<endl;

    ans++;
    if(n-a>0){
        analyze(n-a,m,a);
    }
    if(m-a>0)analyze(m-a,a,a);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double n,m,a;
    cin >> n >> m >>a;
    cout <<(long long)( ceil(n/a)*ceil(m/a))<<endl;
}

