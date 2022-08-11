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
    int t;
    cin >>t;
    vector<int> x(t);
    vector<int> d(t);
    for(int i=0;i<t;i++){
        cin >> x[i];
        d[i]=1;
    }
    string ans="Yes";
    int prev=-1;
    rep(i,t){

        if(i==t-1){
            continue;
        }
        else{
            int mi=0;
            if(x[i]>x[i+1]){
                x[i]--;
                mi=1;
                d[i]=0;
            }
            if(x[i]>x[i+1]){
                ans="No";
                break;
            }
            if(i!=0){
                if(d[i-1]==0){
                    if(x[i]>x[i+1] || x[i]<x[i-1]){
                        ans="No";
                        break;
                    }
                }
                else{
                    if((x[i]+mi)==x[i-1] && x[i]<prev){
                        ans="No";
                        break;
                    }
                    else if((x[i]+mi)<x[i-1]){
                        ans="No";
                        break;
                    }
                }

            }
        }
        if(x[i]!=x[i+1]){
            prev=x[i];
        }
        //cout <<i<<" "<< prev <<" " <<ans<<endl;
        //int a;
        //cin >> a ;
    }
    //cout << prev <<" " <<ans<<endl;
    cout << ans <<endl;
}


