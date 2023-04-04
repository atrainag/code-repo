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

void prtv(vector<char> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i];
        if(i==a.size()-1){
            cout <<"\n";
        }
    }
}

void chk(vector<vector<char>> &x,int i , int j,int q ){
    //cout <<q <<endl;
    int r = x.size();
    int c = x[0].size();
    rep(l,r){
        rep(m,c){
            //cout << x[l][m]<<abs(l-i)+abs(m-j)<<" "<<q<< endl;
            if(x[l][m]=='#' && abs(l-i)+abs(m-j)<=q){
                //0cout <<"ADSADADSAD\n";
                x[l][m]='.';
            }
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r,c;
    cin >> r >> c;
    vector<vector<char>> x(r,vector<char>(c));
    rep(i,r){
        rep(j,c){
            cin >> x[i][j];
        }
    }
    rep(i,r){
        rep(j,c){
            if(x[i][j]!='.' && x[i][j]!='#'){
                chk(x,i,j,(int)(x[i][j]-'0'));
                x[i][j]='.';
            }
        }
    }
    rep(i,r){
        prtv(x[i]);
    }
}

