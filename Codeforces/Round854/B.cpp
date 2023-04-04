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

int check(vector<int> &x){
    for(int i =0;i<x.size()-1;i++){
        if(x[i]!=x[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while(t--){
        cin >> n;
        string a,b;
        cin >>a>>b;
        if(a[0]==b[0]){
            cout << "YES\n"<<a[0]<<"*\n";
        }
        else if(a[a.size()-1]==b[b.size()-1]){
            cout <<"YES\n"<<"*"<<a[a.size()-1]<<"\n";
        }
        else{
            int fnd=0;
            int prev=1;
            vector<int>
            for(int i =1;i<a.size()-1;i++){
                for(int j = prev;j<b.size()-1){
                    if(a[i]==b[j]){
                        fnd++;
                        prev=j+1;
                        break;
                    }
                }
            }
            if(fnd>=2){
                cout <<
            }
        }
    }
}

