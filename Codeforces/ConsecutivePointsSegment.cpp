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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
            int n;
        cin >> n;
        vector<int> x(n);
        for(int i=0 ; i<n;i++){
            cin >> x[i];
        }
        if(n==1){cout <<"YES\n";continue;}
        bool ans=true;
        int dif=0;
        for(int i=0;i<x.size()-1;i++){
            dif=x[i+1]-x[i];
            if(dif>3){
                ans=false;
                break;
            }
            else if(dif==3 && i!=0){
                ans=false;
                break;
            }
            else if(dif==2 && i!=0){
                    x[i+1]++;
            }
            else if(dif==3){
                    x[i+1]--;
            }
        }
        if(ans)cout <<"YES\n";
        else{cout <<"NO\n";}
    }

}

