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
    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}

int f(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*f(n-1);
    }
}

int com(int n,int r){
    return (f(n)/(f(n-r)*f(r)));
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >>n >>k;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    y=x;
    sort(y.begin(),y.end());
    if(y==x){
        cout << "Yes\n";
    }
    else{
        for(int i=0;i<(x.size()-k);i++){
            if(x[i]>x[i+k]){
                int a=x[i];
                x[i]=x[i+k];
                x[i+k]=a;
            }
        }
        if(x==y){
            cout <<"Yes\n";
        }
        else{
            cout <<"No\n";
        }
    }
}
