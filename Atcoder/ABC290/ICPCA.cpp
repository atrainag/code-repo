
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
    int n,t;
    cin >> t;
    while(t--){
        cin >>n ;
        vector<int> x(n);
        rep(i,n){

            cin >> x[i];
        }
        int ans=0;

        if(x[0]>=120){
            ans+=(x[0])/120;
        }
        for(int i=0;i<n-1;i++){
            if(x[i+1]-x[i]>=120){
                ans+=(x[i+1]-x[i])/120;
            }
        }
        if((1440-x[x.size()-1])>=120){
            ans+=(1440-x[x.size()-1])/120;
        }
        if(ans>=2)
        cout << "YES" <<endl;
        else cout <<"NO"<<endl;
    }
}

