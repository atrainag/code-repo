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
    int n,m;
    cin >>n>>m;
    map<int,string> x;
    map<int,int> y;
    int p=0,ac=0;
    int a;string aa;
    rep(i,m){
        cin >>a>>aa;
        if(x[a]!="AC" && x[a]!="WA"){
            x[a]=aa;
            y[a]=0;
            if(aa=="AC"){
                ac++;
            }
            else{
                y[a]++;
            }
        }
        else{
            if(x[a]=="AC"){
                continue;
            }
            else if(aa=="AC"){
                x[a]=aa;
                p+=y[a];
                ac++;
            }
            else y[a]++;
        }
    }
    cout << ac<<" "<<p <<endl;

}


