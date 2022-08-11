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
    double a,b,c,d;
    cin >> a >>b;
    c=floor(a/0.08);
    d=floor(b/0.1);
   // cout << c<<" "<<d<<endl;
    int x=1;
    if(c>d){
        for(double i=d ;i<=c;i++){
            if((int)(i*0.08)==a && (int)(i*0.1)==b ){
                cout <<i <<endl;
                x=0;
                break;
            }
        }
    }
    else{
        for(double i=c ;i<=d;i++){
            if((int)(i*0.08)==a && (int)(i*0.1)==b ){
                cout <<i <<endl;
                x=0;
                break;
            }
        }
    }

    if(x) cout << -1<<endl;
}



