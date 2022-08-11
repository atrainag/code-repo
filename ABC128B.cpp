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

bool cmp(pair<string,int> a,pair<string,int> b){
    if(a.fi!=b.fi){
        if(a.fi<b.fi){
            return true;
        }
        return false;
    }
    else{
        if(a.se>b.se){
            return true;
        }
        return false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string t;
    int te;
    vector<pair<string,int>> x;
    rep(i,n){
        cin >> t>> te;
        x.push_back(mp(t,te));
    }
    vector<pair<string,int>> y;
    y=x;
    sort(x.begin(),x.end());

    cout <<"A\n";
    rep(i,n){
        cout <<x[i].fi<<" "<<x[i].se<<endl;
    }
    /*
    cout <<"B\n";
    rep(i,n){
        cout <<y[i].fi<<" "<<y[i].se<<endl;
    }*/
    rep(i,n){
        for(int j=0;j<n;j++){
             //cout <<x[i].fi<<" "<<x[i].se<<"|"<<y[i].fi<<" "<<y[i].se<<endl;
            if(x[i].fi==y[j].fi && x[i].se==y[j].se){
                cout << 1+j <<endl;
            }
        }
    }
}




